BGOpen("wf210",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B040102102_01_000");
MsgDisp("Kazama","Listening to the waves is so soothing.");
MsgSel("The smell of the ocean is nice too!","I can even hear the sea foam bubbles","Yeah, it makes me drowsy");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040102102_01_010");
    MsgDisp("Kazama","The scents and sounds are part of the
appeal.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040102102_01_020");
        MsgDisp("Kazama","You've got some seriously good hearing.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040102102_01_030");
        MsgDisp("Kazama","Can you really?");
        MsgDisp("主人公","Yeah, it's like a crackling sound.");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,2);
        SEPlay("EV_SE_506",1,0.5);
        SEWait();
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040102102_01_040");
        MsgDisp("Kazama","......
It's like I can't hear it at all.");
        MsgDisp("主人公","That's no good. Listen really close.
Close your eyes.");
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,3);
        VoicePlay("B040102102_01_050");
        MsgDisp("Kazama","Alright, alright ready.");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        ChCheek(1,7);
        VoicePlay("B040102102_01_060");
        MsgDisp("Kazama","... Is this good?");
        MsgDisp("主人公","Yeah... Hehehe.");
        ChMotion(1,3);
        Wait(10,0);
        ChEye(1,0);
        ChMouth(1,2);
        ChCheek(1,0);
        VoicePlay("B040102102_01_070");
        MsgDisp("Kazama","What is it?");
        MsgDisp("主人公","Sorry.
It's just, you're standing there
with your eyes closed.");
        ChEye(1,1);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        ChCheek(1,7);
        VoicePlay("B040102102_01_080");
        MsgDisp("Kazama","Because you made me!
Jeez, let's go!");
        ChClose(1);
        MsgDisp("主人公","Oh, ｛風真＊＊｝, wait up.");
        MsgDisp("主人公","(Did I do something to make him mad?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040102102_01_090");
    MsgDisp("Kazama","Well, I guess that's just how good
it feels, huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0,0,0);
