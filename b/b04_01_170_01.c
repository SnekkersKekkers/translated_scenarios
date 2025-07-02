BGOpen("ne340",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040117001_01_000");
MsgDisp("Kazama","It looks like you're enjoying singing?");
MsgSel("It woukld be a pity if｛風真＊＊｝ didn't also sing.","My throat is parched!","I'm kinda short of breath?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,4);
    VoicePlay("B040117001_01_010");
    MsgDisp("Kazama","It would be hard to after
your performance.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040117001_01_020");
    MsgDisp("Kazama","Apparently the Habataki mixed
juice is a staple.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    VoicePlay("B040117001_01_030");
    MsgDisp("Kazama","Are you alright?
You're too fired up.
I'm going to put a ban on karaoke too.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
