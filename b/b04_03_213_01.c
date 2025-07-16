BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040321301_03_000");
MsgDisp("Honda","Huh, there's an animal that wasn't there
the day before?");
MsgSel("Amazing! You have a good memory","The kitten sleeping on the sofa?","The doggy by the entrance is an ornament?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B040321301_03_010");
    MsgDisp("Honda","It's quite rare to see a scottish fold
with perfectly floppy ears?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040321301_03_020");
    MsgDisp("Honda","Yep yep, that kitten with floppy ears.
Huh?
It looks a bit like you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B040321301_03_030");
    MsgDisp("Honda","Urkー, how did you find out?
I meant it as a joke!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
