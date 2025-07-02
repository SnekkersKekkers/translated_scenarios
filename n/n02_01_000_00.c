ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,254,0,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020100000_01_000");
    MsgDisp("Kazama","Did you do good?");
    MsgDisp("主人公","Ah, you've come to see the results,
｛風真＊＊｝?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("N020100000_01_010");
    MsgDisp("Kazama","Yeah. A friendly childhood rival...
Is that too cliche?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(Hehe, I'm glad I did my best!
I'm not gonna lose next time either!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("N020100000_01_020");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100000_01_030");
    MsgDisp("Kazama","Congratulations. However, I'm not feeling
so good about myself.");
    MsgDisp("主人公","Umm, was it just a lucky streak?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("N020100000_01_040");
    MsgDisp("Kazama","This feeling just keeps growing.");
    MsgDisp("主人公","Hehe, sorry.
I really gave it my all.");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100000_01_050");
    MsgDisp("Kazama","Then allow me to compliment you.
Just know, I'll be working really hard
next time.");
    MsgDisp("主人公","(Hehe, I did it!
｛風真＊＊｝ praised me!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    ChEye(1,3);
    ChMotion(1,3);
    VoiceEVSPlay(1);
    VoicePlay("N020100000_01_060");
    MsgDisp("Kazama","｛主人公｝.
You did it, top rank.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Thank you!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100000_01_070");
    MsgDisp("Kazama","You worked so hard.
I'm happy for you too.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100000_01_080");
    MsgDisp("Kazama","You know, you've always been deeply
invested in what you do. Do your best, but
don't push yourself too hard.");
    MsgDisp("主人公","Hehe, yeah.
Thank you.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("N020100000_01_090");
    MsgDisp("Kazama","I let my guard down, but next time, I'm
aiming for the top rank.");
    MsgDisp("主人公","Huh?
I'm not gonna lose!");
    ChEyeOpenLevel(1,0);
    Wait(8,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100000_01_100");
    MsgDisp("Kazama","Well then, shall we do our best, so we can
achieve a childhood friends 1-2 finish?");
    MsgDisp("主人公","(｛風真＊＊｝ praised me!
I'm glad I did my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1);
