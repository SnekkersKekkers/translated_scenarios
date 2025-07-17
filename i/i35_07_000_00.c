BGOpen("ar100",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome!");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("I350700000_07_000");
    MsgDisp("Mikage","Ooh, part-time job, huh.
Nice.");
    MsgDisp("主人公","Yes, I had a shift today.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("I350700000_07_010");
    MsgDisp("Mikage","I see, keep at it.
There's fun to be had here that you can't
get at school.");
    MsgDisp("主人公","Yes, and I also get paid here.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I350700000_07_020");
    MsgDisp("Mikage","You can't get any from Haba High?
I get a lot, though.");
    MsgDisp("主人公","Hehe, is that so?
Then, please order a lot.
I'll show you to your seat.");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7);
    break ;
    case 3:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome!");
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("I350700000_07_030");
    MsgDisp("Mikage","Oh, there you are.");
    MsgDisp("主人公","｛御影＊＊｝, you came!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I350700000_07_040");
    MsgDisp("Mikage","To see you hard at work, and to receive
some of that energy.");
    MsgDisp("主人公","Hm, energy...?
Is something the matter?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I350700000_07_050");
    MsgDisp("Mikage","Nothing much, just the usual.
Well, one cup of coffee.");
    MsgDisp("主人公","Understood.
Please sit wherever you'd like.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEWait();
    MsgClose();
    Wait(30,0);
    SEPlay("EV_SE_544");
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("I350700000_07_060");
    MsgDisp("Mikage","｛主人公｝.
A refill, please.");
    MsgDisp("主人公","Ah, yes. ...｛御影＊＊｝, you're taking it
quite slow today.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("I350700000_07_070");
    MsgDisp("Mikage","Well, I guess it's fine now?");
    MsgDisp("主人公","Hm?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I350700000_07_080");
    MsgDisp("Mikage","I'm killing time until things cool down.");
    MsgDisp("主人公","Are you in the middle of something?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I350700000_07_090");
    MsgDisp("Mikage","Hm, if I had to say, I guess I'm nowhere
near it?");
    MsgDisp("主人公","(I wonder if he's slacking off...)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7);
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgClose();
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("I350700000_07_100");
    MsgDisp("Mikage","Yo, you're working, huh.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Welcome!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I350700000_07_110");
    MsgDisp("Mikage","Nice smile.
Feels like we're at school.");
    MsgDisp("主人公","I wouldn't say \"welcome\" at school,
though.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I350700000_07_120");
    MsgDisp("Mikage","I guess so.
Then, like the cultural festival?");
    MsgDisp("主人公","This is a proper, established cafe.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I350700000_07_130");
    MsgDisp("Mikage","Excuse me for that.
Well, one established coffee, please.");
    MsgDisp("主人公","Yes, understood!
Would you like to have a cake with it?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("I350700000_07_140");
    MsgDisp("Mikage","I get it, I'll have a cake set, then.");
    MsgDisp("主人公","Yes!
Thank you for your continued patronage.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I350700000_07_150");
    MsgDisp("Mikage","You damned good salesperson!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(ALright!
｛御影＊＊｝ ate a lot of
delicious cakes.)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEStop("EV_SE_DOOR_014",1);
BGMStop();
