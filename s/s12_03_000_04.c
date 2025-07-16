MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
BGOpen("ex020",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("S120300004_03_000");
    MsgDisp("Honda","Ah......");
    MsgDisp("主人公","Eh?
｛本多＊＊｝, what's wrong?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("S120300004_03_010");
    MsgDisp("Honda","I want to tell the Gods: Thank you for the
past three years.");
    MsgDisp("主人公","Oh, me too.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300004_03_020");
    MsgDisp("Honda","Alright. There's not much time left, but
let's enjoy our school days! Cya!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(My last year of high school.
Let's live without regrets!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("S120300004_03_030");
    MsgDisp("Honda","This is the end. Our last New Years of our
high school years. Do you regret anything?");
    MsgDisp("主人公","Regrets on New years, huh?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("S120300004_03_040");
    MsgDisp("Honda","Uhm, I'm wondering what they are.");
    MsgDisp("主人公","Hehe, I'm just thinking about it.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300004_03_050");
    MsgDisp("Honda","Alright, think about it while we walk.
I'll take you home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("S120300004_03_060");
    MsgDisp("Honda","I really wanted to spend New Years with
you this year.
So let me just thank you for that.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("S120300004_03_070");
    MsgDisp("Honda","Thank you.");
    MsgDisp("主人公","No, no problem.
Thank you too.
What's this about?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("S120300004_03_080");
    MsgDisp("Honda","Because it's our last New Years while in
high school, we don't know what will
happen next year, right?");
    MsgDisp("主人公","Oh......
I see.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("S120300004_03_090");
    MsgDisp("Honda","Of course, I'd like to spend next New
Years with you as well.
But that's up to you, I guess?");
    MsgDisp("主人公","Eh?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("S120300004_03_100");
    MsgDisp("Honda","Let's walk home slowly.
We can chat along the way.
Let's go.");
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
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
