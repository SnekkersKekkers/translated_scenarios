BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(Well, it's time to head home now.)");
MsgDisp("主人公","(...Huh? ｛風真＊＊｝ is over
there. Might as well have a chat before
heading home.)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110100801_01_000");
MsgDisp("Kazama","Hey, ...
Did you not notice anything?");
MsgDisp("主人公","Eh, what's this all of a sudden?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100801_01_010");
MsgDisp("Kazama","Hey, anything that's different.
About me.
Is there anything that bothers you?");
ChMouth(1,0);
MsgDisp("主人公","(Bothers me...? I'm worried that
｛風真＊＊｝'s hair is growing
long and blocking his vision...)");
while (1){
    RunEverydaySksp(1,1,1,0,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(1,1);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("G110100801_01_020");
    MsgDisp("Kazama","It's not my uniform.");
    ChEye(1,0);
    ChMouth(1,0);
    }
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("G110100801_01_040");
MsgDisp("Kazama","H-Hey.
If you say it, I will understand.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100801_01_050");
MsgDisp("Kazama","...But, well.
You were right.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100801_01_060");
MsgDisp("Kazama","I cut my hair a bit.
You really are paying attention, huh?");
MsgDisp("主人公","Eh, u-uh...well, yeah.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100801_01_070");
MsgDisp("Kazama","Heh...Surprisingly, you really are paying
attention to me. You pass.");
MsgDisp("主人公","(Umm...
I guess I should be quiet about the fact I
was worried his hair was too long.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
