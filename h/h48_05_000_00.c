ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,2,4,-1,-1,0,0,0,30);
    VoicePlay("H480500000_05_000");
    MsgDisp("Hiiragi","Ah, I've finally found you.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
Did you come to watch me?");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("H480500000_05_010");
    MsgDisp("Hiiragi","Yes, of course.
I'm quite the fan of your performances,
you know?");
    MsgDisp("主人公","Hehe, I'm glad,
even if you are joking.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("H480500000_05_020");
    MsgDisp("Hiiragi","Hm?
I wouldn't tell such an unamusing joke.");
    ChEye(5,4);
    VoicePlay("H480500000_05_030");
    MsgDisp("Hiiragi","The way you express your nerves, 
all the way down to the very tips 
of your fingers in your performance, 
inspires me.");
    MsgDisp("主人公","Thank you. But, hearing you say
that is starting to make me a little
nervous, ｛柊＊＊＊｝......");
    ChEye(5,3);
    VoicePlay("H480500000_05_040");
    MsgDisp("Hiiragi","Haha, you've already received a 
perfect score from me. All that's 
left is for you to make sure you're 
satisfied. Go on.");
    MsgDisp("主人公","(Alright......
I have to do my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
