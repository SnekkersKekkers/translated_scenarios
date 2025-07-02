MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
BGOpen("ex020",0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","This is the last New Year's shrine visit
of our high school years......");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200004_02_000");
    MsgDisp("Sassa","Hm, I guess so.");
    MsgDisp("主人公","We'll be graduating in March.
I wonder if we'll come again next year?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200004_02_010");
    MsgDisp("Sassa","This year has just begun!
Don't talk about next year yet!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200004_02_020");
    MsgDisp("Sassa","See, doesn't the demon look like
it's laughing?");
    MsgDisp("主人公","Hehe, you're right.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("S120200004_02_030");
    MsgDisp("Sassa","Ahh, we have to try our best this
year so we don't get laughed at!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("S120200004_02_040");
    MsgDisp("Sassa","Okay then.
I'll jog home.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(There's only a few days left of
our high school life. Let's spend it
without regrets!)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120200004_02_050");
    MsgDisp("Sassa","This is our last visit as Habataki
students.");
    MsgDisp("主人公","Yeah, it's a bit sad.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,5);
    VoicePlay("S120200004_02_060");
    MsgDisp("Sassa","But that doesn't mean that this
will be our last shrine visit together.");
    MsgDisp("主人公","I guess, but......");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("S120200004_02_070");
    MsgDisp("Sassa","What's with that but...?
You're making me feel anxious.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200004_02_080");
    MsgDisp("Sassa","I'll take you home.
Let's walk there slowly.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    break ;
    case 4:
    case 5:
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120200004_02_090");
    MsgDisp("Sassa","Ah, I really am so happy.
Thank you for coming with me.");
    ChEye(2,0);
    ChEyeOpenLevel(2,10);
    MsgDisp("主人公","Of course, I feel the same.
｛颯砂＊＊｝, you wished really hard in
your prayer, didn't you?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("S120200004_02_100");
    MsgDisp("Sassa","Yeah.
I guess it was more of a thank you than
a wish.");
    MsgDisp("主人公","A thank you?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("S120200004_02_110");
    MsgDisp("Sassa","When I stood next to you and
clapped my hands together, I remembered
a lot of things.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200004_02_120");
    MsgDisp("Sassa","And rather than making a new wish,
I wanted to give thanks.");
    MsgDisp("主人公","I see......");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200004_02_130");
    MsgDisp("Sassa","Sometimes, when I'm concentrating
during a competition, there's this
moment where it feels like time stops.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("S120200004_02_140");
    MsgDisp("Sassa","When we clapped our hands earlier,
it felt a bit similar to that. I was
shocked when I looked at you.");
    MsgDisp("主人公","Huh, me?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("S120200004_02_150");
    MsgDisp("Sassa","Yeah. You were there.");
    MsgDisp("主人公","I was right next to you?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,0);
    ChEyeOpenLevel(2,0);
    VoicePlay("S120200004_02_160");
    MsgDisp("Sassa","I thought you looked so serious 
with your hands together like that.");
    ChEye(2,0);
    ChEyeOpenLevel(2,10);
    MsgDisp("主人公","Huh. Why are you laughing?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200004_02_170");
    MsgDisp("Sassa","Hmm, I guess it's because I'm
relieved? I'll take you home now.
Let's go.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
SEWait();
