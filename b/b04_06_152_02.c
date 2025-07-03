BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040615202_06_000");
MsgDisp("Himuro","Shall we have a serious competition today?");
MsgSel("Sounds good, what shall we bet?","I'll definitely lose.","How about we just relax and have fun?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040615202_06_010");
    MsgDisp("Himuro","Heeh, so that means you 
have no intention of losing?
Then, let's bet on one drink.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040615202_06_020");
    MsgDisp("Himuro","Isn't it important to 
challenge yourself?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040615202_06_030");
        MsgDisp("Himuro","...Hm.
How boring.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040615202_06_040");
        MsgDisp("Himuro","Got it.
Then, do you have any requests?");
        MsgDisp("主人公","Request?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040615202_06_050");
        MsgDisp("Himuro","Like getting a bullseye for example.");
        MsgDisp("主人公","The bullseye is the centre right?
Amazing!");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040615202_06_060");
        MsgDisp("Himuro","Well, it's not a 100
percent success rate.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,4);
        VoicePlay("B040615202_06_070");
        MsgDisp("Himuro","But, the probability raises
depending on the reward.");
        MsgDisp("主人公","You want a drink
or something?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040615202_06_080");
        MsgDisp("Himuro","That won't increase it.");
        MsgDisp("主人公","Ehhh?
Then, hmm....");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040615202_06_090");
        MsgDisp("Himuro","...Something like holding 
it on the way home.");
        MsgDisp("主人公","Eh, holding what?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040615202_06_100");
        MsgDisp("Himuro","...Your hand.");
        MsgDisp("主人公","eh!
Y-yeah... okay.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,3);
        VoicePlay("B040615202_06_110");
        MsgDisp("Himuro","I'll definitely get it in.");
        MsgDisp("主人公","(My heart is racing!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
