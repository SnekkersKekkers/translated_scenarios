BGOpen("sc200",0);
ScrFadeIn(0);
MsgDisp("主人公","(Hmmm, nice weather.
It feels nice......)");
SEPlay("EV_SE_671");
SEWait();
MsgDisp("主人公","Those footsteps......
could it be......");
VoicePlay("G110200500_02_000");
MsgDisp("Sassa?","Oh-, there you are.
Let's run together!");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev002",0);
MsgClose();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,100,1,1,0,#1,#1,0,0);
SEPlay("EV_SE_FOOT_037");
ScrFadeIn(0);
VoicePlay("G110200500_02_010");
MsgDisp("Sassa","Yeah.
You look like a fine athlete.");
MsgDisp("主人公","Haa......｛颯砂＊＊｝, 
You're a bit fast today......");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200500_02_020");
MsgDisp("Sassa","Yes I'm serious today too.
But, you're doing completely fine.");
MsgDisp("主人公","Y-Yeah. Somewhat.");
MsgDisp("主人公","(｛颯砂＊＊｝, I wonder if he's really
running all out...... His mouth, is he
smiling?)");
BGMVol(0.5,2);
while (1){
    RunEverydaySksp(2,0,0,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    VoicePlay("G110200500_02_040");
    ChEye(2,1);
    ChMouth(2,0);
    ChMotion(2,1);
    MsgDisp("Sassa","Haha!
You're jumping around like that with ease.");
    }
VoicePlay("G110200500_02_030");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
MsgDisp("Sassa","Sorry sorry, 
I wasn't laughing at you.");
VoicePlay("G110200500_02_050");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
MsgDisp("Sassa","I wasn't holding back or anything.
You're just getting stronger.");
MsgDisp("主人公","Really?");
MsgClose();
SEStop("EV_SE_FOOT_037",1.5);
ScrFadeOut(0);
MsgClose();
ChClose(2,0,0);
SEPlay("EV_SE_SCHOOL_002",0,0.6);
BGOpen("sc200",0);
MsgClose();
ChOpen(2,41,3,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110200500_02_060");
MsgDisp("Sassa","That's the warning bell, thank you.
With that, it seems like I'll be able to 
sleep well this afternoon? See you.");
MsgClose();
SEPlay("EV_SE_626");
BGMStop();
MsgClose();
ChClose(2);
MsgDisp("主人公","(I always move about, 
so I could run with ease!
But, don't sleep, ｛颯砂＊＊｝......)");
SEStop("EV_SE_SCHOOL_002",1);
MsgClose();
ScrFadeOut(0,0);
