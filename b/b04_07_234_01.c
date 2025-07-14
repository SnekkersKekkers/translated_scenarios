BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(7,255,5,0,0,10,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040723401_07_000");
MsgDisp("Mikage","With this, are you satisfied?
Young Lady.");
MsgSel("Yes, I'm satisfied!","What about you, ｛御影＊＊｝?","I want to spin more!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040723401_07_010");
    MsgDisp("Mikage","That's good then.
I couldn't see your face because it was
spinning around, so I was worried.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("B040723401_07_020");
    MsgDisp("Mikage","I'm satisfied.
If I were to be greedy, I'd like to see
your delighted face.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B040723401_07_030");
    MsgDisp("Mikage","Are you some sort of DJ?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
