BGOpen("sc609",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I've prepared the materials for the next
meeting......)");
VoicePlay("G110500801_40_000");
MsgDisp("Male Student","Good work todayー.
Please lock up.");
MsgDisp("主人公","Yeees.");
MsgDisp("主人公","(Huh? ｛柊＊＊＊｝...... )");
MsgClose();
ScrFadeOut(0,0,30);
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,2,0,0,0,#1,0,0,0,0);
Wait(30,0);
ScrFadeIn(0);
ChMouthOpenLevel(5,0);
VoicePlay("G110500801_05_000");
MsgDisp("Hiiragi","............");
MsgDisp("主人公","Ah......hehe");
MsgDisp("主人公","(｛柊＊＊＊｝ is dozing off?
He seems tired.
Maybe I'll close his laptop......)");
while (1){
    RunEverydaySksp(5,0,0,0,1,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChMouthOpenLevel(5,0);
    VoicePlay("G110500801_05_030");
    MsgDisp("Hiiragi","Phewー,Zzzー......");
    }
ChMotion(5,1);
Wait(20,0);
ChEye(5,1);
ChMouth(5,1);
ChEyeOpenLevel(5,12);
VoicePlay("G110500801_05_010");
MsgDisp("Hiiragi","I'm not tired, you know?
I'm alright.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,9);
SEPlay("EV_SE_712");
Wait(30,0);
VoicePlay("G110500801_05_040");
MsgDisp("Hiiragi","You were laughing just now, right?");
MsgDisp("主人公","Eh.
You could hear that?");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
SEStop("EV_SE_712",0);
VoicePlay("G110500801_05_050");
MsgDisp("Hiiragi","Yes, of course.
I told you I like this time, didn't I?
I won't fall asleep.");
MsgDisp("主人公","Yes.
But, don't push yourself too hard.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEPlay("EV_SE_712");
VoicePlay("G110500801_05_060");
MsgDisp("Hiiragi","Thank you.
Phewー,I'll do a bit more for now.");
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,2);
SEStop("EV_SE_712",0);
MsgDisp("主人公","(｛柊＊＊＊｝, you were definitely asleep
just now right?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
