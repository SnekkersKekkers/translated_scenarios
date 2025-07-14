BGOpen("ne100",1);
ScrFadeIn(0);
MsgDisp("主人公","(I just want to collect more and more
fashion items...)");
MsgDisp("主人公","(Ah... maybe I can find ｛七ツ森＊｝ at
the coffee shop?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","Ah...!");
SEStop("EV_SE_DOOR_014");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110400202_04_000");
MsgDisp("Nanatsumori","Ah.");
ChEye(4,0);
ChMouth(4,2);
VoicePlay("G110400202_04_010");
MsgDisp("Nanatsumori","Are you checking out new items
today?");
MsgDisp("主人公","Absolutely! I was also wondering if you
were here too, ｛七ツ森＊｝.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("G110400202_04_020");
MsgDisp("Nanatsumori","Me?");
MsgDisp("主人公","Yeah. Because every time you're here,
there's something new in the catalog.");
ChEye(4,0);
ChMouth(4,2);
VoicePlay("G110400202_04_030");
MsgDisp("Nanatsumori","Haha. Well, when something new is out I'm
usually at a photo shoot.");
MsgDisp("主人公","Hehe!");
VoicePlay("G110400202_04_040");
MsgDisp("Nanatsumori","I also find out about new releases outside
of my job, so this is where I research
them.");
MsgDisp("主人公","I see.
So this is where you can get a headstart
on everyone else?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("G110400202_04_050");
MsgDisp("Nanatsumori","Yeah.");
MsgDisp("主人公","(｛七ツ森＊｝, what kind of websites
are you checking...)");
while (1){
    RunEverydaySksp(4,0,0,0,0,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    BGMVol(0.5,2);
    VoicePlay("G110400202_04_070");
    MsgDisp("Nanatsumori","These websites are for different...
Wait a second.");
    }
VoicePlay("G110400202_04_060");
ChEye(4,2);
ChMouth(4,2);
MsgDisp("Nanatsumori","Oh, wait a second.
I think there's something new on the site.");
MsgDisp("主人公","How did you find it?");
VoicePlay("G110400202_04_080");
MsgDisp("Nanatsumori","It wasn't easy.
At least now we are ahead of the curve.");
MsgDisp("主人公","Hehe!");
VoicePlay("G110400202_04_090");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,1);
MsgDisp("Nanatsumori","Hey, do you have free time today?
Do you want to look at new items while
drinking coffee together?");
MsgDisp("主人公","Okay!");
MsgDisp("主人公","(I got to look at new items on the
internet with ｛七ツ森＊｝! )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
