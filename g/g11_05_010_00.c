BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("G110501000_40_000");
MsgDisp("Male Student","Hiiragi, don't leave your slip here.");
VoicePlay("G110501000_05_000");
MsgDisp("Hiiragi","Okay. I'll put it into the management
book.");
MsgDisp("主人公","(The chairman of the Habataki Theatre
Company is working in the student council
room...... It's a bit strange, isn't it.)");
MsgClose();
ScrFadeOut(0,0,30);
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,1,1,1,12,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
SEStop("EV_SE_712",0);
VoicePlay("G110501000_05_010");
MsgDisp("Hiiragi","......Ahem. Is there something stuck to my
face?");
MsgDisp("主人公","No, sorry for staring.");
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
SEPlay("EV_SE_712");
MsgDisp("主人公","(Hey...... were ｛柊＊＊＊｝'s eyes
always such a pretty colour......)");
while (1){
    RunEverydaySksp(5,0,1,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(5,1);
    ChMouth(5,1);
    ChMotion(5,1);
    ChEyeOpenLevel(5,0);
    Wait(10,0);
    ChEyeOpenLevel(5,#1);
    VoicePlay("G110501000_05_030");
    MsgDisp("Hiiragi","Touching me out of nowhere......
Your bad habits are starting to emerge.");
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0);
    ChEyeOpenLevel(5,0);
    Wait(10,0);
    ChEyeOpenLevel(5,#1);
    }
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
SEStop("EV_SE_712",0);
VoicePlay("G110501000_05_020");
MsgDisp("Hiiragi","What do we do after our eyes meet?");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110501000_05_050");
MsgDisp("Hiiragi","Shall I guess what you're thinking?");
MsgDisp("主人公","Eh?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110501000_05_060");
MsgDisp("Hiiragi","The other day we went to see Habataki
Theatre Company's performance together,
right?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,2);
VoicePlay("G110501000_05_070");
MsgDisp("Hiiragi","Since then, you look at me strangely from
time-to-time.");
MsgDisp("主人公","O-Oh, yeah.
It just made me realize again that you're
the leader......");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110501000_05_080");
MsgDisp("Hiiragi","Yes, that may be true, But I'm also your
classmate, and a member of the student
council.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110501000_05_090");
MsgDisp("Hiiragi","So don't think anything of it......
And please don't treat me any differently.");
MsgDisp("主人公","Eh?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,2);
ChEyeOpenLevel(5,8);
VoicePlay("G110501000_05_100");
MsgDisp("Hiiragi","A long time ago, a friend I had finally
managed to make drifted away from me
because of that. This was around
elementary school time.");
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","(｛柊＊＊＊｝ has had lots of difficult
experiences since he was little...... Even
if it's just a little, I would like to
help him......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
