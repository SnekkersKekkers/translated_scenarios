BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(Well, it's time to go home.)");
MsgDisp("主人公","(......Huh? ｛風真＊＊｝ is over there. I
might as well have a chat before I go
home.)");
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
ChOpen(1,100,0,0,0,8,#1,0,0);
ScrFadeIn(0);
SEPlay("EV_SE_084");
Wait(30,0);
MsgDisp("主人公","The wind has really come out, huh......");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110101002_01_000");
MsgDisp("Kazama","We've been so immersed in talking.
Let's go home before it gets dark.");
MsgDisp("主人公","Yeah.");
MsgDisp("主人公","(......Huh? ｛風真＊＊｝'s pockets are
bulging? I wonder if he's got something in
them.)");
while (1){
    RunEverydaySksp(1,0,0,0,1,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(1,1);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("G110101002_01_030");
    MsgDisp("Kazama","Good boy, good boy?
I'm not a child.");
    ChEye(1,0);
    ChMotion(1,0);
    }
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110101002_01_040");
MsgDisp("Kazama","Haha, as expected from your sense of
smell, huh?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110101002_01_050");
MsgDisp("Kazama","I thought I'd eat these with you.
It's sweet potato.
I was secretly carrying them.");
MsgDisp("主人公","Eh, really?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110101002_01_060");
MsgDisp("Kazama","Yeah, I was hiding it in my uniform, and
completely missed the chance to give it to
you?");
MsgDisp("主人公","Hehe, yay!
Thank you, ｛風真＊＊｝.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("G110101002_01_070");
MsgDisp("Kazama","You made that face so happily when we were
camping too.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110101002_01_080");
MsgDisp("Kazama","I'm going to be late, So let's eat whilst
walking.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
