BGOpen("ar300",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Thank you very much!");
    MsgClose();
    SEStop("EV_SE_589",3);
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,-1,-1,0,0);
    VoicePlay("I650700000_07_000");
    MsgDisp("Mikage","You got a nice greeting, huh?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Are you refueling?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I650700000_07_010");
    MsgDisp("Mikage","Yeah, my baby is having a nice meal.");
    MsgDisp("主人公","Your bike, right, ｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I650700000_07_020");
    MsgDisp("Mikage","Right.
I refueled on your energy, too.
See you later.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(I hope ｛御影＊＊｝ comes again.)");
    break ;
    case 3:
    SEPlay("EV_SE_733");
    Wait(120,0);
    MsgDisp("主人公","Welcome!");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,-1,-1,0,0);
    VoicePlay("I650700000_07_030");
    MsgDisp("Mikage","Yo.
There's a lot of vigor at this stand.");
    MsgDisp("主人公","Hehe!　Yes.
That's Stallion Gasoline's motto.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I650700000_07_040");
    MsgDisp("Mikage","You seem like you're having fun.
Do you think they'd hire me, too?");
    MsgDisp("主人公","Huh?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I650700000_07_050");
    MsgDisp("Mikage","See, aren't the male uniforms kinda
close in color to what I'm wearing......
Or not?");
    MsgDisp("主人公","Hehe, you're going to
get scolded by vice principal Himuro
again, you know?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I650700000_07_060");
    MsgDisp("Mikage","You're right.
Haa, I'll just give up and go home.
See you.");
    SEPlay("EV_SE_734");
    Wait(60,0);
    SEPlay("EV_SE_751",1);
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(But,
working with ｛御影＊＊｝
might be fun?)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Thank you very much!");
    SEPlay("EV_SE_733");
    VoicePlay("I650700000_07_070");
    MsgDisp("Mikage?","Ooh, you're going at it.");
    Wait(90,0);
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,-1,-1,0,0);
    SEWait();
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Welcome!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("I650700000_07_080");
    MsgDisp("Mikage","Yeah, a full tank today too, please.");
    MsgDisp("主人公","Yes.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    BGMVol(0.5,2);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    SEWait();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    Wait(20,0);
    ChOpen(7,255,0,0,0,-1,-1,0,0);
    SEWait();
    SEPlay("EV_SE_039");
    MsgDisp("主人公","The tank is full!
Thank you very much.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I650700000_07_090");
    MsgDisp("Mikage","Oh, I left drinks for everyone
in your break room, so drink up when
you get a chance!");
    MsgDisp("主人公","Yay!
Thank you very much.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("I650700000_07_100");
    MsgDisp("Mikage","Yeah.
It's my favorite brand of milk.
It's good.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("I650700000_07_110");
    MsgDisp("Mikage","See you.");
    SEPlay("EV_SE_734");
    Wait(60,0);
    SEPlay("EV_SE_751",1);
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(Milk......
Yeah, thanks for the drink!)");
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
