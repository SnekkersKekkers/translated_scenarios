BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040515202_05_000");
MsgDisp("Hiiragi","Shall we have a serious match soon?");
MsgSel("I can't match up with｛柊＊＊＊｝","Alright, I won't lose!","Let's bet a Habataki Juice on it.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,4);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040515202_05_010");
        MsgDisp("Hiiragi","Huh?
What's the matter, 
where's your usual guts?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,3);
        ChMouth(5,2);
        VoicePlay("B040515202_05_020");
        MsgDisp("Hiiragi","Huh?
What's the matter?");
        MsgDisp("主人公","…………");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040515202_05_030");
        MsgDisp("Hiiragi","Understood.
Let's add a handicap.");
        MsgDisp("主人公","Hehe!
Yeah, thank you.");
        ChEye(5,4);
        ChMouth(5,3);
        ChMotion(5,1);
        VoicePlay("B040515202_05_040");
        MsgDisp("Hiiragi","Phewー...
Ah, you did it huh?");
        MsgDisp("主人公","Hehe, shall we have a competition then?");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(5);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        SEWait();
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_061",0.5);
        SEWait();
        MsgDisp("主人公","Yay!");
        MsgClose();
        ChOpen(5,255,0,2,4,#1,#1,0,0);
        VoicePlay("B040515202_05_050");
        MsgDisp("Hiiragi","There was no need for a handicap.");
        MsgDisp("主人公","｛柊＊＊＊｝'s method of teaching was
successful. Thank you.");
        ChMotion(5,4);
        VoicePlay("B040515202_05_060");
        MsgDisp("Hiiragi","I'm happy to be blessed
with a good student.");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040515202_05_070");
        MsgDisp("Hiiragi","Okay, let's move on to the second 
round. The true winner is the one 
who wins two out of three rounds.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(5);
        SEWait();
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        SEPlay("EV_SE_062");
        SEWait();
        MsgDisp("主人公","Ehhh∋　Sneaky!");
        MsgDisp("主人公","(Hey...｛柊＊＊＊｝, 
You really hate to lose huh...)");
        MsgClose();
        ScrFadeOut(0,0);
        ChOpen(5,255,0,0,0,#1,#1,0,0,0,0);
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040515202_05_080");
    MsgDisp("Hiiragi","Heheh.
I like that about you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,3);
    VoicePlay("B040515202_05_090");
    MsgDisp("Hiiragi","Is that okay? 
Let's make it a mega size then.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
