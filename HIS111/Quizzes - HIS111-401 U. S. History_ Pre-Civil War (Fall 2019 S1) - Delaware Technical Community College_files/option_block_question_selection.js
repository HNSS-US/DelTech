function SetRadioButtonAsSelected( radioButtonId ) {
    var radioButton = UI.GetById(radioButtonId);
    if ( !radioButton ) {
        return;
    }
    radioButton.checked = true;

    var radioButtonsForQuestion = document.getElementsByName( radioButton.name );
    if ( !radioButtonsForQuestion ) {
        return;
    }

    [].forEach.call(radioButtonsForQuestion, function (rb) {
        var siblingAncestors = D2L.LP.Web.UI.Html.Dom.GetAncestorElementsByClassName(
            'd2l-rowshadeonhover-selected',
            rb
        );

        if (siblingAncestors[0]) {
            siblingAncestors[0].classList.remove('d2l-rowshadeonhover-selected');
            siblingAncestors[0].classList.add('d2l-rowshadeonhover');
        }
    });

    var shadedAncestors = D2L.LP.Web.UI.Html.Dom.GetAncestorElementsByClassName(
        'd2l-rowshadeonhover',
        radioButton
    );

    if (!shadedAncestors || shadedAncestors.length !== 1) {
        return;
    }

    shadedAncestors[0].classList.remove('d2l-rowshadeonhover');
    shadedAncestors[0].classList.add('d2l-rowshadeonhover-selected');

	// click on the radio button to trigger auto save
    onClickRadioButtonAutoSaveEvent(radioButtonId);

}

function ToggleCheckBox( event, checkBoxId ) {
    // Prevent the default checkbox event from occuring
    event.stopPropagation();
    event.preventDefault();

    // Use settimeout = 0 to only propogate checked setting after all other DOM changes have occurred.
    setTimeout( function () {

        var checkBox = UI.GetById( checkBoxId );
        if ( !checkBox ) {
            return;
        }

        var oldShadeClass = checkBox.checked ? 'd2l-rowshadeonhover-selected' : 'd2l-rowshadeonhover';
        var newShadeClass = checkBox.checked ? 'd2l-rowshadeonhover' : 'd2l-rowshadeonhover-selected';

        checkBox.checked = !checkBox.checked;

        var shadedAncestors = D2L.LP.Web.UI.Html.Dom.GetAncestorElementsByClassName(
                oldShadeClass,
                checkBox
            );

        if (!shadedAncestors || shadedAncestors.length !== 1) {
            return;
        }
        shadedAncestors[0].classList.remove(oldShadeClass);
        shadedAncestors[0].classList.add(newShadeClass);

		// click on the checkbox to trigger auto save
        onClickCheckboxAutoSaveEvent(checkBoxId);
    }, 0);
}

function onClickCheckboxAutoSaveEvent(checkBoxId) {
    var checkBox = UI.GetById(checkBoxId);
    if (!checkBox) {
        return;
    }

    WindowEventManager.BC(checkBox, 'd2l-quiz-autosave-checkbox-custom-eventobj');
}

function onClickRadioButtonAutoSaveEvent(radioButtonId) {
    var radioButton = UI.GetById(radioButtonId);
    if (!radioButton) {
        return;
    }

    WindowEventManager.BC(radioButton, 'd2l-quiz-autosave-radiobutton-custom-eventobj');
}