MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
BGOpen("ex020",0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120200002_02_000");
    MsgDisp("Sassa","Good. I got to start the year off
with you.");
    MsgDisp("主人公","Yeah, treat me well this year.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("S120200002_02_010");
    MsgDisp("Sassa","Yeah, let's start it off with a
run!
I'll run and train a bit. Cya!");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ is working hard
again this year.
Alright, I'll try my best too!)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120200002_02_020");
    MsgDisp("Sassa","The start of the year is
important.");
    MsgDisp("主人公","And visiting the shrine on
New Year's is important too.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("S120200002_02_030");
    MsgDisp("Sassa","That's right!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S120200002_02_040");
    MsgDisp("Sassa","That's why coming with you is
such a great start to the New Year!");
    MsgDisp("主人公","Yeah, for me too.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S120200002_02_050");
    MsgDisp("Sassa","Good, that's the right energy.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200002_02_060");
    MsgDisp("Sassa","Let's walk home with that same
sort of energy. Like you're running.");
    MsgDisp("主人公","Hehe, we're not really running,
right?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200002_02_070");
    MsgDisp("Sassa","I know. Even though I feel like it");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120200002_02_080");
    MsgDisp("Sassa","Phew, I prayed a lot this year.");
    MsgDisp("主人公","Yeah, your face was so serious.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("S120200002_02_090");
    MsgDisp("Sassa","What, were you watching me?
It's okay for me to be serious once in
a while.");
    MsgDisp("主人公","Isn't ｛颯砂＊＊｝ always serious?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200002_02_100");
    MsgDisp("Sassa","Ah, no good.
I may be a track idiot, but I still want
to go again with you next year.");
    MsgDisp("主人公","Eh?
I've never thought of you that way.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200002_02_110");
    MsgDisp("Sassa","It's better like that.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200002_02_120");
    MsgDisp("Sassa","Hmm, here, let me take you home.
Want to run like crazy?");
    MsgDisp("主人公","I won't run!");
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
