ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,254,5,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020200000_02_000");
    MsgDisp("Sassa","Top rank∋
You are so cool.");
    MsgDisp("主人公","I did do my best to study!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200000_02_010");
    MsgDisp("Sassa","I see, good to know hard work pays off.
Congratulations.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(I'm so happy. I got praised.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020200000_02_020");
    MsgDisp("Sassa","You're so cool!
You got the top rank.");
    MsgDisp("主人公","Yeah, I did!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("N020200000_02_030");
    MsgDisp("Sassa","You know, you have a great energy.");
    MsgDisp("主人公","Hehe, are you exaggerating?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("N020200000_02_040");
    MsgDisp("Sassa","No, I wish I was that blessed.
Can I worship you?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ seems to be happy too?
I'm glad I did my best!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,254,0,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("N020200000_02_050");
    MsgDisp("Sassa","｛主人公｝.
Getting the top rank is so cool.");
    MsgDisp("主人公","Yeah, I'm really happy!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200000_02_060");
    MsgDisp("Sassa","I might say this a lot, but you really
gave it your all.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("N020200000_02_070");
    MsgDisp("Sassa","I really respect your hard work.");
    MsgDisp("主人公","Thank you, ｛颯砂＊＊｝.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("N020200000_02_080");
    MsgDisp("Sassa","Yeah.
When I'm around someone like you, I get
motivated. Congratulations!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ really praised me,
I'm glad I did my best.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2);
