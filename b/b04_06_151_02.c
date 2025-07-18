BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
ChMotion(6,2,1);
VoicePlay("B040615102_06_000");
MsgDisp("Himuro","It went into the gutter...");
MsgSel("Don't mind it, get the next one!","Alright, I have a chance now!","That's unusual huh?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040615102_06_010");
        MsgDisp("Himuro","Can you stop giving me such clumsy
consolation?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040615102_06_020");
        MsgDisp("Himuro","Can you stop giving me such clumsy
consolation?");
        MsgDisp("主人公","Ah, sorry.");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,5);
        VoicePlay("B040615102_06_030");
        MsgDisp("Himuro","...That's wrong.
I was taking my anger out on you just now.
I'm the one who should say sorry.");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040615102_06_040");
        MsgDisp("Himuro","I'm just annoyed with myself.
DOn't mind it.");
        MsgDisp("主人公","Hehe, ｛氷室＊＊｝, you shouldn't
mind it either?");
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040615102_06_050");
        MsgDisp("Himuro","No, that's impossible.
I've shown you my uncool side.");
        MsgDisp("主人公","I want to see all sides of
｛氷室＊＊｝ though?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040615102_06_060");
        MsgDisp("Himuro","...What's with that line?
Hearing that, I'm the one who'll get
embarrassed.");
        MsgDisp("主人公","It's just my true feelings.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040615102_06_070");
        MsgDisp("Himuro","I'm happy but, I only want to show you my
good side.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,0);
        VoicePlay("B040615102_06_080");
        MsgDisp("Himuro","That's just my pride.");
        MsgDisp("主人公","｛氷室＊＊｝...");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,1);
        VoicePlay("B040615102_06_090");
        MsgDisp("Himuro","Right, watch carefully now.
Cause I'm gonna get aim for a strike next.");
        MsgDisp("主人公","Hehe, yeah!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040615102_06_100");
    MsgDisp("Himuro","I'll bounce back next time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040615102_06_110");
    MsgDisp("Himuro","Well yeah.
Everyone has bad days.
...But the next one will be a strike.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
