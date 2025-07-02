BGOpen("tr520",0);
ChLayout(1);
ChNanaType(-1);
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040424202_04_000");
MsgDisp("Nanatsumori","Phewー.
Shall we go for a walk after eating?");
MsgSel("Sounds good, let's go!","I still don't want to move...","Walk...?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040424202_04_010");
    MsgDisp("Nanatsumori","Alright.
Let's take it easy.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,0,1);
        VoicePlay("B040424202_04_020");
        MsgDisp("Nanatsumori","Not yet you say, 
When will you move?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040424202_04_030");
        MsgDisp("Nanatsumori","Are you still full?");
        MsgDisp("主人公","It's not like that but...
I want to stay like this 
a little longer.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040424202_04_040");
        MsgDisp("Nanatsumori","ＯＫ.
Let's take it easy,");
        MsgClose();
        ChClose(4,0,30);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgDisp("主人公","…………");
        VoicePlay("B040424202_04_050");
        MsgDisp("Nanatsumori","…………");
        MsgDisp("主人公","...Hmm.
Oh no, looks like I fell asleep.");
        MsgDisp("主人公","｛七ツ森＊｝ is...
Ah, he's asleep.");
        VoicePlay("B040424202_04_060");
        MsgDisp("Nanatsumori","...Mm.");
        VoicePlay("B040424202_04_070");
        MsgDisp("Nanatsumori","...One more bite.
Aahn....");
        MsgDisp("主人公","(Looks like he's dreaming)");
        VoicePlay("B040424202_04_080");
        MsgDisp("Nanatsumori","...Mmm. Tasty.
Then...I'm up next.
Alright, open up....");
        MsgDisp("主人公","(Hehe, he seems happy)");
        VoicePlay("B040424202_04_090");
        MsgDisp("Nanatsumori","I'm happy...");
        MsgDisp("主人公","Hehe");
        VoiceEVSPlay(4);
        VoicePlay("B040424202_04_100");
        MsgDisp("Nanatsumori","｛主人公｝...");
        MsgDisp("主人公","Eh∈");
        VoicePlay("B040424202_04_110");
        MsgDisp("Nanatsumori","∈");
        SEPlay("EV_SE_617",0.8,0.7);
        SEWait();
        MsgClose();
        ChLayout(1);
        ChNanaType(-1);
        ChOpen(4,255,0,5,2,-1,-1,0,0,0,60);
        VoicePlay("B040424202_04_120");
        MsgDisp("Nanatsumori","Was I, sleeping...?");
        MsgDisp("主人公","Y-yeah.");
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040424202_04_130");
        MsgDisp("Nanatsumori","Did I...say something?");
        MsgDisp("主人公","Umm, you were sleep 
talking a little.");
        ChMotion(4,0,1);
        VoicePlay("B040424202_04_140");
        MsgDisp("Nanatsumori","...What was I saying?");
        MsgDisp("主人公","S-sorry.
I couldn't really catch 
what you were saying?");
        ChEye(4,4);
        ChMouth(4,0);
        ChMotion(4,2,1);
        VoicePlay("B040424202_04_150");
        MsgDisp("Nanatsumori","I see.
that's good...");
        MsgDisp("主人公","Was it a good dream? ");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040424202_04_160");
        MsgDisp("Nanatsumori","Yeah.");
        MsgDisp("主人公","(I'm also kind of embarassed...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040424202_04_170");
    MsgDisp("Nanatsumori","You look obviously displeased.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
