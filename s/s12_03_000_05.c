BGOpen("ho000",0);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("S120300005_03_000");
    MsgDisp("Honda","Sigh, time's up.
We arrived back at your house.");
    MsgDisp("主人公","Yeah, thanks for taking me. What we talked
about earlier, what did you mean about
regretting something on our shrine visit?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S120300005_03_010");
    MsgDisp("Honda","Ah, yeah!");
    MsgDisp("主人公","Yep, ｛本多＊＊｝.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300005_03_020");
    MsgDisp("Honda","I need to take a long look at you, so I
remember you many years from now.");
    MsgDisp("主人公","Ehh?");
    ChClose(3);
    ChLayout(0);
    SEPlay("EV_SE_544");
    MsgClose();
    ChOpen(3,255,4,0,4,#1,#1,0,0);
    SEWait();
    VoicePlay("S120300005_03_030");
    MsgDisp("Honda","......");
    MsgDisp("主人公","｛本多＊＊｝, your face...is close.");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    ChClose(3);
    ChLayout(1);
    MsgClose();
    ChOpen(3,255,3,4,0,#1,#1,0,0);
    SEWait();
    VoicePlay("S120300005_03_040");
    MsgDisp("Honda","Ah, I'm sorry.
I got too close.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300005_03_050");
    MsgDisp("Honda","But now I have zero regrets.
I've already pictured it in my head.
You won't make me forget it.");
    MsgDisp("主人公","Eh?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S120300005_03_060");
    MsgDisp("Honda","See you at school!");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(My heart is racing...Like ｛本多＊＊｝
says, I want to spend the rest of my high
school life without regrets!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Thank you for walking me home.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S120300005_03_070");
    MsgDisp("Honda","No problem.
I should be the one thanking you.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("S120300005_03_080");
    MsgDisp("Honda","I was able to talk to you a lot about next
year and figure things out.
All the things I have to do.");
    MsgDisp("主人公","Really?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("S120300005_03_090");
    MsgDisp("Honda","Yeah. I can see my destination. Even if I
don't know if I can get there just yet.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("S120300005_03_100");
    MsgDisp("Honda","The rest is up to me.
And you, I guess?");
    MsgDisp("主人公","Me?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("S120300005_03_110");
    MsgDisp("Honda","Yeah. There's still some time left until
graduation. So I'm thinking about it.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("S120300005_03_120");
    MsgDisp("Honda","I will teach you properly.
So wait for me.");
    MsgDisp("主人公","｛本多＊＊｝...?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("S120300005_03_130");
    MsgDisp("Honda","Okay, See you later.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(｛本多＊＊｝'s destination...
How is that up to me?
I guess I'll think about it too!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
