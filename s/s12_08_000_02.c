MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(8,-1);
ChMouthOpenLevel(8,-1);
ChCheek(8,0);
BGOpen("ex020",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0);
    VoicePlay("S120800002_08_000");
    MsgDisp("Shirahane","The shrine visit is over already.");
    MsgDisp("主人公","Yup, you're right.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S120800002_08_010");
    MsgDisp("Shirahane","Let's do our best this year to
bring good fortune to each other～!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(8,0,30);
    MsgDisp("主人公","(I hope this year is another
good year......)");
    break ;
    case 3:
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3);
    ChEyeOpenLevel(8,0);
    VoicePlay("S120800002_08_020");
    MsgDisp("Shirahane","Haa!
I was able to make a lot of wishes this
year. I feel relieved.");
    MsgDisp("主人公","Did you ask for many things?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("S120800002_08_030");
    MsgDisp("Shirahane","Yup.
Should I really just go home? 
Let me walk you back.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    break ;
    case 4:
    case 5:
    ChEye(8,0);
    ChMouth(8,4);
    ChMotion(8,0);
    ChEyeOpenLevel(8,10);
    VoicePlay("S120800002_08_040");
    MsgDisp("Shirahane","......Is it all over now?");
    MsgDisp("主人公","Have you finished everything
you wanted to do for our shrine visit?");
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("S120800002_08_050");
    MsgDisp("Shirahane","What a shame.");
    MsgDisp("主人公","Huh?");
    ChEye(8,1);
    ChMouth(8,4);
    ChMotion(8,4,1);
    VoicePlay("S120800002_08_060");
    MsgDisp("Shirahane","......Oh no.
New Years was already such a treat, how
will I manage for the rest of the year?");
    MsgDisp("主人公","？？？");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("S120800002_08_070");
    MsgDisp("Shirahane","Let's go home.
I'll walk you to your house.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
SEWait();
