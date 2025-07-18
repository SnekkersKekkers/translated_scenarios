BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
Welcome!");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("I450700000_07_000");
    MsgDisp("Mikage","Yo, working energetically?");
    MsgDisp("主人公","Yes.
Working at the flower shop is fun.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoicePlay("I450700000_07_010");
    MsgDisp("Mikage","Having fun is most important.
I like being surrounded by flowers, too.");
    MsgDisp("主人公","We're the same.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I450700000_07_020");
    MsgDisp("Mikage","Our tastes match.
Now, I'll ask you to show me around the
store.");
    MsgDisp("主人公","Hehe, please take your time choosing.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    VoicePlay("I450700000_07_030");
    MsgDisp("Mikage","Ooh, I see you have succulents, too.");
    MsgDisp("主人公","(Hehe.
Looks like ｛御影＊＊｝
is going to take a long time, right?)");
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_544");
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("I450700000_07_040");
    MsgDisp("Mikage","Excuse me.");
    MsgDisp("主人公","Yes, I'll be right with you!
Ah, ｛御影＊＊｝?
Welcome.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I450700000_07_050");
    MsgDisp("Mikage","Oh, you're working hard.
Hey, could I ask for a bouquet?");
    MsgDisp("主人公","Of course.
Please choose which flowers you'd like.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I450700000_07_060");
    MsgDisp("Mikage","I'll leave it to you.
Ah, and be careful of my budget, okay?");
    MsgDisp("主人公","Hehe, understood!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.5);
    ChClose(7);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    Wait(30,0);
    SEPlay("EV_SE_535",0.2);
    SEWait();
    MsgDisp("主人公","How is this?");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I450700000_07_070");
    MsgDisp("Mikage","Ooh, nice.
Thanks.");
    MsgDisp("主人公","It was my pleasure.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I450700000_07_080");
    MsgDisp("Mikage","...Are you curious who I'm giving it to?");
    MsgDisp("主人公","Will you tell me?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I450700000_07_090");
    MsgDisp("Mikage","There's a baby shower at my parent's
place. I was going to take a picture of
the bouquet and send that.");
    MsgDisp("主人公","Congratulations!");
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("I450700000_07_100");
    MsgDisp("Mikage","I wanted to send the real bouquet, but
it'd get eaten, right?");
    MsgDisp("主人公","(Eaten??
...Ah, he meant a baby animal!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","｛御影＊＊｝!
Welcome!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("I450700000_07_110");
    MsgDisp("Mikage","Oh, you've completely become a proper
clerk.");
    MsgDisp("主人公","You think so?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("I450700000_07_120");
    MsgDisp("Mikage","Just don't forget about school, okay?");
    MsgDisp("主人公","Yes, of course.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("I450700000_07_130");
    MsgDisp("Mikage","Then it's fine.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("I450700000_07_140");
    MsgDisp("Mikage","Then, I'll request a flower arrangement to
put on the desk in the staff room.");
    MsgDisp("主人公","Please leave it to me.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.5);
    ChClose(7);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    Wait(30,0);
    MsgDisp("主人公","Thank you for waiting.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    SEWait();
    ChOpen(7,255,3,0,0,#1,#1,0,0);
    VoicePlay("I450700000_07_150");
    MsgDisp("Mikage","Ooh, it's well balanced, and just seeing
it will cheer us up.");
    MsgDisp("主人公","Yes. I hope that this will make the staff
room even a little more comfortable for
you, ｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    ChEyeOpenLevel(7,8);
    VoicePlay("I450700000_07_160");
    MsgDisp("Mikage","What?
You say the nicest things.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    ChEyeOpenLevel(7,0);
    VoicePlay("I450700000_07_170");
    MsgDisp("Mikage","Aah, if I have this, even vice principal
Himuro won't come...
I hope?");
    MsgDisp("主人公","Hehe, it doesn't have that kind of effect.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    ChEyeOpenLevel(7,10);
    VoicePlay("I450700000_07_180");
    MsgDisp("Mikage","So it can't be an amulet of protection.
But, it can be a relaxing one.
Thanks.");
    MsgDisp("主人公","(He seemed happy, thank goodness!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
