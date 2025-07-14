BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Welcome! ......Hm? ｛颯砂＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,0,0,0,#1,#1,0,0);
    VoicePlay("I450200000_02_000");
    MsgDisp("Sassa","Ah, it's you.
Mom asked me to get some flowers for the
table.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("I450200000_02_010");
    MsgDisp("Sassa","Anything good?");
    MsgDisp("主人公","Yeah, just wait a bit.");
    MsgClose();
    ScrFadeOut(0);
    ChClose(2,0,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    Wait(40);
    MsgClose();
    MsgClose();
    ChOpen(2,255,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    SEPlay("EV_SE_535",0.2);
    SEWait();
    MsgDisp("主人公","Here, thank you for waiting.
A flower arrangement for a table.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I450200000_02_020");
    MsgDisp("Sassa","Wow, you're amazing.
Thanks.");
    MsgDisp("主人公","I hope your mother likes them.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("I450200000_02_030");
    MsgDisp("Sassa","She'll definitely like this!");
    MsgDisp("主人公","Thanks.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("I450200000_02_040");
    MsgDisp("Sassa","And it's nice seeing you buzzing around
the flowers.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("I450200000_02_050");
    MsgDisp("Sassa","I'll come again.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ seemed to like it.
I'm glad.
Let's work harder!)");
    break ;
    case 3:
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝. Welcome!");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,0,0,4,#1,#1,0,0);
    VoicePlay("I450200000_02_060");
    MsgDisp("Sassa","You're working hard.");
    MsgDisp("主人公","Yeah, learning about flowers is pretty
fun.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I450200000_02_070");
    MsgDisp("Sassa","I see...... Nice.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("I450200000_02_080");
    MsgDisp("Sassa","But working with water must be hard on
your hands.");
    MsgDisp("主人公","Hm, it's tough in the winter.
But it's worth it.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I450200000_02_090");
    MsgDisp("Sassa","I see, as expected.
I can tell the store trusts you.");
    MsgDisp("主人公","No, I still have
a long way to go.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I450200000_02_100");
    MsgDisp("Sassa","Then, let's both do our best!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("I450200000_02_110");
    MsgDisp("Sassa","Ah, take care of your hands.
I take care of my body, too.
It's the same.");
    MsgDisp("主人公","Yeah, thanks, ｛颯砂＊＊｝.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝ encouraged me......
Alright, let's do our best!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝. Welcome!");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,4,0,4,#1,#1,0,0);
    VoicePlay("I450200000_02_120");
    MsgDisp("Sassa","I was in the area,
so I stopped by.");
    MsgDisp("主人公","We have a lot in stock, like potted plants
and seeds, so please take your time
looking around.");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I450200000_02_130");
    MsgDisp("Sassa","I gotta go.");
    MsgDisp("主人公","Hm, already?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("I450200000_02_140");
    MsgDisp("Sassa","Yeah, this store's dangerous.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    ChCheek(2,10);
    VoicePlay("I450200000_02_150");
    MsgDisp("Sassa","Pretty flowers, sweet smells, and on top
of that, you're here too, right?
I'm feeling a little strange.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("I450200000_02_160");
    MsgDisp("Sassa","I can't, I gotta run.");
    MsgDisp("主人公","Huh!?");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    BGMStop();
    ChClose(2);
    MsgDisp("主人公","(Strange......? I wonder what happened to
｛颯砂＊＊｝? )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
