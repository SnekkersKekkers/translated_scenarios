BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("G110500802_05_000");
MsgDisp("Hiiragi?","Are there missing receipts?
Perhaps it's my mistake......
The amount of money doesn't add up.");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,254,4,4,0,#1,#1,0,0);
MsgDisp("主人公","Eh? That's troubling. I'll also try to
search around the room too.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G110500802_05_010");
MsgDisp("Hiiragi","Thank you.
I'll check the numbers I entered.");
MsgClose();
ScrFadeOut(0,0,30);
ChClose(5,0,0);
BGOpen("ev005",0);
MsgClose();
ChOpen(5,100,0,0,0,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
MsgDisp("主人公","I searched the desk, drawers and all the
places it could possibly be, but I
couldn't find anything......");
ChEye(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChMouth(5,1);
ChEyeOpenLevel(5,12);
SEStop("EV_SE_712",0);
VoicePlay("G110500802_05_020");
MsgDisp("Hiiragi","Is that so.
I'm sorry for making you join me.");
SEPlay("EV_SE_712");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500802_05_030");
MsgDisp("Hiiragi","I must have made a mistake inputting the
information.
I'll start over from the beginning.");
MsgDisp("主人公","Y-Yes.......");
MsgDisp("主人公","(Ah∈ under the laptop——)");
while (1){
    RunEverydaySksp(5,0,0,0,1,0);
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
    VoicePlay("G110500802_05_050");
    MsgDisp("Hiiragi","I-s there something on it?");
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0);
    ChEyeOpenLevel(5,0);
    Wait(10,0);
    ChEyeOpenLevel(5,#1);
    SEPlay("EV_SE_712");
    }
ChEye(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChMouth(5,0);
ChEyeOpenLevel(5,13);
SEStop("EV_SE_712",0);
VoicePlay("G110500802_05_040");
MsgDisp("Hiiragi","Eh! could it be under the computer?");
MsgClose();
ScrFadeOut(0,0,30);
ChClose(5,0,0);
SEPlay("EV_SE_710");
SEWait();
BGOpen("sc605",0);
ScrFadeIn(0);
MsgClose();
ChOpen(5,254,3,3,4,#1,#1,0,0);
ChMouth(5,3);
VoicePlay("G110500802_05_070");
MsgDisp("Hiiragi","It's there∈ I'm sorry for the trouble.");
MsgDisp("主人公","No, I'm glad it's been found!");
ChEye(5,2);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("G110500802_05_080");
MsgDisp("Hiiragi","No, that's no good at all.
I couldn't even do this job by
myself......");
MsgDisp("主人公","That's not true at all.
After all, your calculations were right,
right?");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("G110500802_05_090");
MsgDisp("Hiiragi","Haa......yes.");
MsgDisp("主人公","You've gotten good at using a computer,
haven't you?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("G110500802_05_100");
MsgDisp("Hiiragi","You......
It's moving me to tears......");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G110500802_05_110");
MsgDisp("Hiiragi","Thank you.
I feel a little more confident now.
You give very good compliments.");
MsgDisp("主人公","(Yay!
But I want to help ｛柊＊＊＊｝
even more.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
