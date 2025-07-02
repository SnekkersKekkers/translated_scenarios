BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,0,4,-1,-1,0,0,0,0);
ScrFadeIn(0);
ChEye(5,4);
ChMotion(5,4);
VoicePlay("B040523402_05_000");
MsgDisp("Hiiragi","You were competing with 
the cup next to us...
in number of rotations.");
MsgSel("Hehe, I thought we were going to go flying!","I wonder if the people on the cup on the opposite side are okay...","You don't want to lose huh?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040523402_05_010");
    MsgDisp("Hiiragi","Hey! It's no laughing matter.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,1);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040523402_05_020");
        MsgDisp("Hiiragi","They're slumped on the bench.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040523402_05_030");
        MsgDisp("Hiiragi","Are you alright?");
        MsgDisp("主人公","Yeah.
What about you,｛柊＊＊＊｝?");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040523402_05_040");
        MsgDisp("Hiiragi","If I wasn't, your spinning
would've done me in.");
        MsgDisp("主人公","I'm sorry.
Did I spin it too much?");
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040523402_05_050");
        MsgDisp("Hiiragi","Well, with how happy you 
looked, I couldn't stop it.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040523402_05_060");
        MsgDisp("Hiiragi","But, you should avoid doing 
that with anyone else.");
        MsgDisp("主人公","Eh?");
        ChEye(5,3);
        VoicePlay("B040523402_05_070");
        MsgDisp("Hiiragi","That expression...
You're an honest personn.");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040523402_05_080");
        MsgDisp("Hiiragi","The only person who can keep up with
you exerting all your might 
onto the teacups is me.
That much is a hard fact.");
        MsgDisp("主人公","I see.");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040523402_05_090");
        MsgDisp("Hiiragi","That being the case, it's better
if you only come to the amusement
park with me?");
        MsgDisp("主人公","(Eh.. going to the amusement 
park with only ｛柊＊＊＊｝?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040523402_05_100");
    MsgDisp("Hiiragi","I just discovered that there are 
winners and losers on this ride.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
