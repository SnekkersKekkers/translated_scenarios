BGMStop();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, 
it's finally the runway...I'm nervous..)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    VoicePlay("P730100000_01_000");
    MsgDisp("Kazama","I came to tease you. ");
    MsgDisp("主人公","Ah,｛風真＊＊｝.
Don't tease me.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("P730100000_01_010");
    MsgDisp("Kazama","...Good grief, listen until the end.
I was just about to praise you on it 
being more legit than I thought.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P730100000_01_020");
    MsgDisp("Kazama","Both the clothes and model are stylish.");
    MsgDisp("主人公","Thank you. THough I'm not sure how much I
can trust you?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100000_01_030");
    MsgDisp("Kazama","So you've returned to your usual self? Go,
smiling brightly just as you usually do.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's starting.
I'll to my best then!");
    MsgDisp("主人公","(Huh? After talking to ｛風真＊＊｝, 
I think I feel more at ease...
Alーright, let's do our best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, 
it's finally the runway...I'm nervous..)");
    VoicePlay("P730100000_01_040");
    MsgDisp("Kazama?","What's with that scary 
look on your face?");
    MsgDisp("主人公","Ah,｛風真＊＊｝...");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,3,-1,-1,0,0);
    ChEye(1,4);
    VoicePlay("P730100000_01_050");
    MsgDisp("Kazama","If you get stiff, 
The work you went to the trouble of
making will get ruined, right?");
    MsgDisp("主人公","Y-yeah.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100000_01_060");
    MsgDisp("Kazama","You're still stiff huh...");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P730100000_01_070");
    MsgDisp("Kazama","Relax.
Your work and model is the best.");
    MsgDisp("主人公","...Really?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100000_01_080");
    MsgDisp("Kazama","It is.
Or is my judgement not 
beleievable to you?");
    MsgDisp("主人公","No.
｛風真＊＊｝ 's appraisal is never wrong.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100000_01_090");
    MsgDisp("Kazama","That's right.
So, relax your shoulder and go.");
    MsgDisp("主人公","Yeah, thank you!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P730100000_01_100");
    MsgDisp("Kazama","With that face, you're invincible.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","(Alーright.
I was praised by ｛風真＊＊｝, 
so let's go with confidence!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
