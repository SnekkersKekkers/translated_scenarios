BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040623402_06_000");
MsgDisp("Himuro","There's nothing but children and couples
around us...");
MsgSel("Everyone is having fun!","They have our business; we have ours","They're the same as us");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040623402_06_010");
    MsgDisp("Himuro","Except for me that is.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040623402_06_020");
    MsgDisp("Himuro","...Fair enough.
Well, we're us and it's enough 
to be just that unashamedly.");
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
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040623402_06_030");
        MsgDisp("Himuro","How is it the same?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623402_06_040");
        MsgDisp("Himuro","The same? 
I don't think we're at the age we can
be called children anymore though.");
        MsgDisp("主人公","No, it's not that.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,10);
        VoicePlay("B040623402_06_050");
        MsgDisp("Himuro","Eh...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040623402_06_060");
        MsgDisp("Himuro","Well, I can't deny there's a 
chance we'll be seen that way.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623402_06_070");
        MsgDisp("Himuro","No one else knows 
what the reality is.");
        MsgDisp("主人公","Yep, that's right.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040623402_06_080");
        MsgDisp("Himuro","...Since we're here anyways, shall
we try to go along with it?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040623402_06_090");
        MsgDisp("Himuro","Like holding hands or something.");
        MsgDisp("主人公","Eh∋");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,0);
        VoicePlay("B040623402_06_100");
        MsgDisp("Himuro","...No, I'm joking.
I don't know why I said that.");
        MsgDisp("主人公","Hehe, that's right.");
        ChEye(6,2);
        ChMouth(6,2);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040623402_06_110");
        MsgDisp("Himuro","...Haa, maybe I should have 
approached it more naturally. ");
        MsgDisp("主人公","(｛氷室＊＊｝……？)");
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
