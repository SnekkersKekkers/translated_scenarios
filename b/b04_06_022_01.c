BGOpen("wf221",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040602201_06_000");
MsgDisp("Himuro","Do you like boats?");
MsgSel("I like them!","Not really...","I like｛氷室＊＊｝");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040602201_06_010");
    MsgDisp("Himuro","I don't dislike it either.
We get along huh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040602201_06_020");
    MsgDisp("Himuro","Hmmm.
Well, maybe with this you'll
have a chance to like it.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,1);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("B040602201_06_030");
    MsgDisp("Himuro","...Ha?
Were you listening to the question?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
