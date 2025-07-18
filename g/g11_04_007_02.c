SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you very much!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
Wait(80,0);
BGMPlay("BGM_C04_NANA_A");
ChLayout(1);
ChNanaType(1);
ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
VoicePlay("G110400702_04_000");
MsgDisp("Nanatsumori","Yo.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome!");
MsgClose();
ScrFadeOut(0);
ChClose(4);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChMouthOpenLevel(4,0);
VoicePlay("G110400702_04_010");
MsgDisp("Nanatsumori","......");
MsgDisp("主人公","(｛七ツ森＊｝ is intensely looking at his
phone.)");
MsgDisp("主人公","(I wonder what he's looking at...)");
while (1){
    RunEverydaySksp(4,0,1,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    VoicePlay("G110400702_04_030");
    ChMouthOpenLevel(4,#1);
    MsgDisp("Nanatsumori","Huh, where is the previous page...");
    }
VoicePlay("G110400702_04_020");
ChEye(4,1);
ChMouth(4,1);
MsgDisp("Nanatsumori","...I can feel you staring intensely.");
VoicePlay("G110400702_04_040");
ChMotion(4,1);
MsgDisp("Nanatsumori","...Hm?");
MsgDisp("主人公","Ah.
I'm sorry, I didn't mean to stare.");
VoicePlay("G110400702_04_050");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
MsgDisp("Nanatsumori","It's no use.
It's fine.");
MsgDisp("主人公","Yeah.
Especially since you're a model, you're
always sparkling.");
VoicePlay("G110400702_04_060");
ChEye(4,1);
ChMouth(4,1);
MsgDisp("Nanatsumori","Don't take it so seriously...");
MsgDisp("主人公","Really?
｛七ツ森＊｝, you're so
cool.");
VoicePlay("G110400702_04_070");
ChMouthOpenLevel(4,0);
ChCheek(4,8);
MsgDisp("Nanatsumori","......");
VoicePlay("G110400702_04_080");
ChMotion(4,1);
ChMouthOpenLevel(4,#1);
MsgDisp("Nanatsumori","It's no use.
I've already had three cup of coffees, I
can't have another.");
MsgDisp("主人公","(I guess I shouldn't have said anything.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
