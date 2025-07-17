BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(Ah right...｛風真＊＊｝ said he had
something he wanted to talk to me about
...I wonder if something happened?)");
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
ChOpen(1,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","What did you want to talk about?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110101000_01_000");
MsgDisp("Kazama","Oh yeah. You know the charity auction from
the other day? Do you remember it?");
MsgDisp("主人公","Yeah ｛風真＊＊｝ was hosting
in a suit.
It was truly amazing.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("G110101000_01_010");
MsgDisp("Kazama","That's fine but...");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110101000_01_020");
MsgDisp("Kazama","Apparently one of the customers at the
venue wanted me to do another auction job.");
MsgDisp("主人公","Ehh...!
If ｛風真＊＊｝ wants to do it,
why not give it a go?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110101000_01_030");
MsgDisp("Kazama","That's right huh...");
MsgDisp("主人公","(｛風真＊＊｝ tends to overthink things, so
even if it's just a little, I hope I can
give him a bit of push...)");
while (1){
    RunEverydaySksp(1,0,0,0,1,1);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("G110101000_01_040");
    MsgDisp("Kazama","Hm?
Did I talk too much?");
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEyeOpenLevel(1,#1);
    }
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110101000_01_070");
MsgDisp("Kazama","You want to give me a push?
Thank you.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110101000_01_080");
MsgDisp("Kazama","I like being able to see all sorts of
items at auctions...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,2);
VoicePlay("G110101000_01_090");
MsgDisp("Kazama","Yeah, I see.
I'll tell him what I'm thinking, and see
if he still lets me does it.");
MsgDisp("主人公","I hope he understands.");
MsgDisp("主人公","(I hope we get to see
｛風真＊＊｝ hosting
again...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
