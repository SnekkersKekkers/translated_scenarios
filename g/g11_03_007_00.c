BGOpen("ar600",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yes, I feel like I can study more now
that I work part time at a bookstore!)");
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,1,0,3,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("G110300700_03_000");
MsgDisp("Honda","｛主人公｝.
Recently, I've been enjoying talking to
you more and more.");
MsgDisp("主人公","Hehe, that makes me happy.");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev003",0);
ChOpen(3,100,0,0,1,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110300700_03_010");
MsgDisp("Honda","One, two, they're bookworms♪
Three, four, they're stomach worms♪
Rock!");
MsgDisp("主人公","Hehe, that's a cute song!");
MsgDisp("主人公","(｛本多＊＊｝ looks like he's enjoying
himself. ......Hehe, your hair is also
bouncing up and down.)");
while (1){
    RunEverydaySksp(3,1,1,1,0,0);
    if (RunEverydaySkspRsltGet()){
        break ;
        }
    ChEye(3,0);
    ChMouth(3,1);
    ChMotion(3,0);
    VoicePlay("G110300700_03_020");
    MsgDisp("Honda","Five, six, they're all buzzing～♪");
    }
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300700_03_040");
MsgDisp("Honda","Yep yep, let's do it together～");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("G110300700_03_050");
MsgDisp("Honda","Ah, this is, an original counting song
that my Mother used to sing to me when I
was little.");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300700_03_060");
MsgDisp("Honda","Counting insects is kind of fun, isn't it?");
MsgDisp("主人公","Hehe, your Mother sounds lovely.");
VoicePlay("G110300700_03_070");
MsgDisp("Honda","Thank you.");
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110300700_03_080");
MsgDisp("Honda","But you also like studying and books, so
I'm sure you'll be a great mom too?");
MsgDisp("主人公","Eh-!");
MsgDisp("主人公","(I'm happy, but it's a little
embarrassing......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
