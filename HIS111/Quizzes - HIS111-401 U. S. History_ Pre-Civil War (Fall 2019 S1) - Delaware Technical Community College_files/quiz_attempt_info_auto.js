function DoReload(page) {
	var n = new D2L.NavInfo();
	n.SetParam('pg', page);
	Nav.Go(n);
}

function SwapImage(objImg, imgTerm, altTerm, subject, objLink) {
	altTerm.SetSubject(subject);
	objImg.SetImage(imgTerm);

	if (objLink != null) {
		altTerm.AssignText(objLink, "title");
	}

	objImg.SetAlt(altTerm);
}

function UnSave(respondedControl, imageControl, imageTerm, altTerm, subject, link) {
	if (respondedControl.GetValue() == "1") {
		respondedControl.SetValue("0");
	}

	SwapImage(
		imageControl,
		imageTerm,
		altTerm,
		subject,
		link
	);
}

function Save(respondedControl, imageControl, imageTerm, altTerm, subject, link) {
	if (respondedControl.GetValue() == "0") {
		respondedControl.SetValue("1");
	}

	SwapImage(
		imageControl,
		imageTerm,
		altTerm,
		subject,
		link
	);
}


function UpdateSaved(savedIdList, unsavedIdList) {

	var savedImgTerm = new D2L.Language.ImageTerm('QuestionCollection.main.questionSavedAuto');
	var unsavedImgTerm = new D2L.Language.ImageTerm('QuestionCollection.main.questionUnsavedAuto');
	var savedAltTerm = new D2L.Language.Term('QuestionCollection.Shared.altQuestionSaved');
	var unsavedAltTerm = new D2L.Language.Term('QuestionCollection.Shared.altQuestionUnsaved');

	if (unsavedIdList != "") {
		var idArr = unsavedIdList.split(",");
		for (x = 0; x < idArr.length; x++) {
			UnSave(
				UI.GetControl('HDN_RESP_' + idArr[x]),
				UI.GetByName('IMG_' + idArr[x]),
				unsavedImgTerm,
				unsavedAltTerm,
				UI.GetByName('HDN_' + idArr[x]).value,
				D2L.LP.Web.UI.Html.Dom.GetElementById('LNK_' + idArr[x])
			);
		}
	}

	if (savedIdList != "") {
		var idArr = savedIdList.split(",");
		for (x = 0; x < idArr.length; x++) {
			Save(
				UI.GetControl('HDN_RESP_' + idArr[x]),
				UI.GetByName('IMG_' + idArr[x]),
				savedImgTerm,
				savedAltTerm,
				UI.GetByName('HDN_' + idArr[x]).value,
				D2L.LP.Web.UI.Html.Dom.GetElementById('LNK_' + idArr[x])
			);
		}
	}

}
