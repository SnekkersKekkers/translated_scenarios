BGOpen("fp720",0);
ScrFadeIn(0);
SEPlay("EV_SE_652");
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("I150400000_04_000");
    MsgDisp("Nanatsumori","Ah.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝. Welcome!");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,4,1);
    VoicePlay("I150400000_04_010");
    MsgDisp("Nanatsumori","Wait, your voice is loud......");
    MsgDisp("主人公","Hm, but, I am working at this store,
so......");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("I150400000_04_020");
    MsgDisp("Nanatsumori","Sure. But did you need to call my name,
too?");
    MsgDisp("主人公","Ah......
I see, sorry.");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I150400000_04_030");
    MsgDisp("Nanatsumori","Nah, you don't need to apologize,
but...... Good luck with work. See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(I get it.
｛七ツ森＊｝ is a popular model, after
all.)");
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("I150400000_04_040");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah.
Welcome!");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I150400000_04_050");
    MsgDisp("Nanatsumori","Yeah. You're doing good.
How's it going?");
    MsgDisp("主人公","There were a lot of customers today, so it
might be busy.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("I150400000_04_060");
    MsgDisp("Nanatsumori","I see.
Working without any hiccups is a good
thing.");
    MsgDisp("主人公","Hehe, ｛七ツ森＊｝, you sound like a
teacher, you know?");
    ChEye(4,4);
    ChMouth(4,3);
    VoicePlay("I150400000_04_070");
    MsgDisp("Nanatsumori","I have more work experience than you, you
know.
Well, do your best until you're off.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(Could it be that ｛七ツ森＊｝ came to
check on me?)");
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChLayout(1);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
    VoiceEVSPlay(4);
    VoicePlay("I150400000_04_080");
    MsgDisp("Nanatsumori","｛主人公｝. Good work.");
    MsgDisp("主人公","Ah...... If you're dressed like that, are
you about to go to work?");
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("I150400000_04_090");
    MsgDisp("Nanatsumori","Yeah. I just came to check on you on my
way there.");
    MsgDisp("主人公","Hehe.
Thanks.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I150400000_04_100");
    MsgDisp("Nanatsumori","......Ah, that product over there is
pretty hot on the market right now. Nice.
The display's good, too.");
    MsgDisp("主人公","Really?
I set that display.
I'm glad!");
    VoicePlay("I150400000_04_110");
    MsgDisp("Nanatsumori","I like the product and the way it's
presented, too.
It'll definitely be popular.");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I150400000_04_120");
    MsgDisp("Nanatsumori","Well, I gotta go.
Let's both work hard.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(4,0,30);
    MsgDisp("主人公","(｛七ツ森＊｝ came to cheer me on......
Yeah, I'm going to do my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
