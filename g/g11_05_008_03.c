BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Huh? It looks like lunchtime is already
halfway over.");
VoicePlay("G110500803_48_000");
MsgDisp("School Girl","That's right, let's hurry to the
Cafeteria! Let's go before the seats are
all taken.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
Wait(55,0);
SEPlay("EV_SE_DOOR_013");
SEWait();
MsgDisp("主人公","｛柊＊＊＊｝ Ha?
Have you had lunch?");
MsgClose();
ScrFadeOut(0,0,30);
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,1,1,1,12,-1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
SEStop("EV_SE_712",0);
VoicePlay("G110500803_05_000");
MsgDisp("Hiiragi","......Y-Yes.
Ah, I'm sorry.
I ate here first.");
MsgDisp("主人公","Ah, is that right.
Whilst working?");
SEPlay("EV_SE_712");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,-1);
VoicePlay("G110500803_05_010");
MsgDisp("Hiiragi","Yes, I have to be efficient.");
ChMouth(5,0);
MsgDisp("主人公","(Huh? On ｛柊＊＊＊｝'s lips, is
that......red bean paste?)");
while (1){
    RunEverydaySksp(5,0,0,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    SEStop("EV_SE_712",0);
    ChEye(5,1);
    ChMouth(5,1);
    ChMotion(5,1);
    ChEyeOpenLevel(5,0);
    Wait(10,0);
    ChEyeOpenLevel(5,12);
    VoicePlay("G110500803_05_030");
    MsgDisp("Hiiragi","Yes, I'll finish it on the remainder of my
lunch break.");
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0);
    ChEyeOpenLevel(5,0);
    Wait(10,0);
    ChEyeOpenLevel(5,-1);
    SEPlay("EV_SE_712");
    }
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,2);
ChEyeOpenLevel(5,8);
ChCheek(5,7);
SEStop("EV_SE_712",0);
VoicePlay("G110500803_05_020");
MsgDisp("Hiiragi","Ah, the red bean paste......
this is embarasssing.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
ChCheek(5,5);
Wait(10,0);
ChEyeOpenLevel(5,-1);
SEPlay("EV_SE_712");
VoicePlay("G110500803_05_050");
MsgDisp("Hiiragi","Eating whilst doing something else was
really bad manners.");
MsgDisp("主人公","The full-score anpan is delicious isn't
it?");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChCheek(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500803_05_060");
MsgDisp("Hiiragi","Y-You can tell?");
SEPlay("EV_SE_712");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,-1);
VoicePlay("G110500803_05_070");
MsgDisp("Hiiragi","Phew...... Yes, this is what they would
call 'grasping at straws' It doesn't have
to be a full-score anpan though.");
MsgDisp("主人公","Hehe. This makes me want to eat a
full-score anpan too.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
Wait(10,0);
ChEyeOpenLevel(5,12);
SEStop("EV_SE_712",0);
VoicePlay("G110500803_05_080");
MsgDisp("Hiiragi","In that case, you need to hurry.
Everyone looks like they don't believe it
because it's popular.");
MsgDisp("主人公","Yes, well I'm off!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
