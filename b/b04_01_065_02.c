EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
MsgClose();
ChOpen(1,33,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040106502_01_000");
MsgDisp("Kazama","This is an amazing spot!");
MsgSel("Yeah, it's right above us, right?","As expected, the young master's special spot?","You want to watch it here next year, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040106502_01_010");
    MsgDisp("Kazama","Yeah, I can even feel it in my stomach!");
    MsgDispSksp(1,6);
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
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040106502_01_020");
        MsgDisp("Kazama","Alright, don't get carried away.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040106502_01_030");
        MsgDisp("Kazama","Then does that make you the future young
mistress?");
        MsgDisp("主人公","Eh???");
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,#1);
        VoicePlay("B040106502_01_040");
        MsgDisp("Kazama","Is there a problem with that?");
        MsgDisp("主人公","There's no problem, but...");
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040106502_01_050");
        MsgDisp("Kazama","Then what is it?");
        MsgDisp("主人公","No, it's nothing.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        ChCheek(1,7);
        VoicePlay("B040106502_01_060");
        MsgDisp("Kazama","You know that means this special spot
will always be reserved for you.");
        MsgDisp("主人公","Hehe, I understand.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChCheek(1,0);
        VoicePlay("B040106502_01_070");
        MsgDisp("Kazama","Oh, and also, it can't be cancelled.");
        MsgDisp("主人公","(Hehe, I hope we can see it
together again next year too...)");
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
    ChMotion(1,0,1);
    VoicePlay("B040106502_01_080");
    MsgDisp("Kazama","We haven't seen anything yet, right?
It's too early to be so serious.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
