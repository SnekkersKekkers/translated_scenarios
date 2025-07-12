BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,1,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B040520001_05_000");
MsgDisp("Hiiragi","Haa.. the way my legs turn inwards
when I do the snowplough turn 
is just like a beginner.");
MsgSel("Everyone avoids you","｛柊＊＊＊｝, you'll improve quickly","Your posture is great, and you look cool.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChMouth(5,2);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("B040520001_05_010");
    MsgDisp("Hiiragi","I'm sorry for the 
trouble every time...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,0);
    VoicePlay("B040520001_05_020");
    MsgDisp("Hiiragi","Thank you.
I'll believe in your words...");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    ChEyeOpenLevel(5,#1);
    VoicePlay("B040520001_05_030");
    MsgDisp("Hiiragi","Really!
The intermediate course might be near.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
