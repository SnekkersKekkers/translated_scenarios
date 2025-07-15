BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040322102_03_000");
MsgDisp("Honda","Hey, it's surrounded by a moat.");
MsgSel("It looks like it's been attacked by water.","There's pretty koi swimming in it","It's called a water moat, right?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChSet(3,4);
        VoicePlay("B040322102_03_010");
        MsgDisp("Honda","Umm, but the water moats are meant to
guard the castle?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0,1);
        VoicePlay("B040322102_03_020");
        MsgDisp("Honda","Does it look that way to you?");
        MsgDisp("主人公","Yeah. It looks like it would be difficult
to escape the castle.");
        ChMotion(3,1);
        VoicePlay("B040322102_03_030");
        MsgDisp("Honda","Definitely. At that time you could only
hole yourself up in the castle. Then wait
for reinforcements.");
        MsgDisp("主人公","What if help never came?");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040322102_03_040");
        MsgDisp("Honda","Yep yep, good question. At that time, they
would exit through Habataki Castle's
'legendary secret passage'.");
        MsgDisp("主人公","There's a secret passage? Amazing.");
        ChMouth(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040322102_03_050");
        MsgDisp("Honda","Right right, a secret, underground passage
in order for a beautiful princess like you
to stealthily escape.");
        ChEye(3,1);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040322102_03_060");
        MsgDisp("Honda","Well, princess.
This way.");
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(3);
        SEWait();
        MsgDisp("主人公","(｛本多＊＊｝ ended up calling me 'a
princess.')");
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(3,255,0,0,0,#1,#1,0,0,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B040322102_03_070");
    MsgDisp("Honda","Alright! Let's feed them on the way
backー!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B040322102_03_080");
    MsgDisp("Honda","Ding ding ding! Correct. They're common in
castles from the early modern period
onwards.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
