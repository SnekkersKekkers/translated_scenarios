ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020200001_02_000");
    MsgDisp("Sassa","Wow, I always knew you were a good
student.");
    MsgDisp("主人公","Ah, you came to check the results
｛颯砂＊＊｝?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200001_02_010");
    MsgDisp("Sassa","Yeah.
Whatever I got, I'll face the
consequences.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200001_02_020");
    MsgDisp("Sassa","Seeing your results motivates me to do my
best as well.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(Yeah, it was worth all the effort.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("N020200001_02_030");
    MsgDisp("Sassa","｛主人公｝.
You got a good score on your last exams.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Thank you!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200001_02_040");
    MsgDisp("Sassa","I'm in no position to praise you though.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("N020200001_02_050");
    MsgDisp("Sassa","Next time, give me some study tips!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(Yeah, I'm glad I did my best.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,254,4,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("N020200001_02_060");
    MsgDisp("Sassa","｛主人公｝.
That's quite impressive.
I saw your name near the top.");
    MsgDisp("主人公","Thank you.
｛颯砂＊＊｝, did you see your
rank?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200001_02_070");
    MsgDisp("Sassa","Yeah.
Whether I see it or not, the score is
always gonna be the same.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("N020200001_02_080");
    MsgDisp("Sassa","But at this rate, you'll be at the top.");
    MsgDisp("主人公","Huh?
The top is a bit of a stretch...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("N020200001_02_090");
    MsgDisp("Sassa","Not at all.
You definitely have a shot.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200001_02_100");
    MsgDisp("Sassa","I think, am I convincing you in any way?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ really praised me, I'm glad I
did my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2);
