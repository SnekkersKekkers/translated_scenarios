MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
BGOpen("ex020",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4);
    ScrFadeIn(0);
    VoicePlay("S120700004_07_040");
    MsgDisp("Mikage","It's about time to go home.");
    MsgDisp("主人公","Ah......
Yeah.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700004_07_050");
    MsgDisp("Mikage","It's your final winter vacation of high
school. Live properly so you don't have
any regrets, okay?");
    MsgDisp("主人公","Yeah, I'll be graduating soon......");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700004_07_060");
    MsgDisp("Mikage","That's right.
It was packed this year.
Did you get to make a wish properly?");
    MsgDisp("主人公","Yes.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700004_07_070");
    MsgDisp("Mikage","Alright then, I'll take you home.
Shall we talk about our wishes while we
walk?");
    MsgDisp("主人公","Ehh?");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    ScrFadeIn(0);
    VoicePlay("S120700004_07_080");
    MsgDisp("Mikage","......Did you forget to make your wish?");
    MsgDisp("主人公","Hehe!
What do you mean by that?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700004_07_090");
    MsgDisp("Mikage","Oh no......
It's almost time.");
    MsgDisp("主人公","Already?
It's still okay......");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700004_07_100");
    MsgDisp("Mikage","It's not okay.
Your family will be waiting for you.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S120700004_07_110");
    MsgDisp("Mikage","I was just thinking......
If only there was something you forgot to
wish for......");
    MsgDisp("主人公","Eh......");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700004_07_120");
    MsgDisp("Mikage","It's nothing.
Come, I'll take you home.
Let's go.");
    MsgDisp("主人公","Okay, thank you.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
ChEye(7,#1);
ChMouth(7,#1);
