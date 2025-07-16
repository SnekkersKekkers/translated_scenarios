ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("P640300003_03_000");
MsgDisp("Honda","｛主人公｝.
Is my herb tea not done yet?");
MsgDisp("主人公","Ehh∋
Sorry, I'll prepare it right away.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("P640300003_03_010");
MsgDisp("Honda","No, take your time.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("P640300003_03_020");
MsgDisp("Honda","But, the vegetables for sale should be put
in the shade.
It would be a shame if the leaves wilted.");
MsgDisp("主人公","(Uugh... I wasn't attentive to the herb
tea nor the sale... I regret it.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGMStop();
