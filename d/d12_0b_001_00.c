BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(It's time to go home.)");
MsgDisp("主人公","......");
MsgDisp("主人公","(I feel like something's behind me...)");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("主人公","(I feel like someone's watching me from
the rooftop...∋)");
MsgClose();
StlOpen("ev_0b_03");
StlEye(1,0);
StlMouth(1,0);
StlEye(3,0);
StlMouth(3,0);
StlEye(4,0);
StlMouth(4,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
VoicePlay("D120B00100_03_000");
MsgDisp("Honda","Yes!
I'm number one∈");
StlEyeOpenLevel(1,5,1);
VoicePlay("D120B00100_01_000");
MsgDisp("Kazama","No way.
That timing right now, it was definitely
me.");
VoicePlay("D120B00100_04_000");
MsgDisp("Nanatsumori","...You know, how would you even go about
proving this experiment?");
StlEyeOpenLevel(3,5,1);
VoicePlay("D120B00100_03_010");
MsgDisp("Honda","I can tell by the way she looked at me.
I was the first person to meet eyes with
her.");
VoicePlay("D120B00100_04_010");
MsgDisp("Nanatsumori","There's no way you could tell from this
distance...");
StlEyeOpenLevel(1,#1);
VoicePlay("D120B00100_01_010");
MsgDisp("Kazama","True.");
MsgDisp("主人公","Hey!
What are you guys doing up on the rooftop?");
StlEyeOpenLevel(3,#1);
VoicePlay("D120B00100_03_020");
MsgDisp("Honda","We were trying telepathy on you!");
MsgDisp("主人公","Eh, telepathy?");
VoicePlay("D120B00100_03_030");
MsgDisp("Honda","Yeah!
Out of the three of us, we wanted to see
whose telepathy could reach you first!");
StlEyeOpenLevel(1,5,1);
VoicePlay("D120B00100_01_020");
MsgDisp("Kazama","Hey, it was mine, wasn't it?");
VoicePlay("D120B00100_04_020");
MsgDisp("Nanatsumori","No, like I said, how could you even judge
something like this...");
StlEyeOpenLevel(3,5,1);
VoicePlay("D120B00100_03_040");
MsgDisp("Honda","Mine was the most surprising, right?");
StlEyeOpenLevel(1,#1);
MsgDisp("主人公","S...Sorry! I felt like someone was
watching me but I couldn't tell who it
was!");
StlEyeOpenLevel(3,#1);
VoicePlay("D120B00100_03_050");
MsgDisp("Honda","I see.
Thanks for your help anyway.
∈ Be careful on the way home!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("sc130",1);
Wait(15,1);
ScrFadeIn(0);
MsgDisp("主人公","(They're all waving together...Hehe! It's
probably who ｛本多＊＊｝ comes
up with such weird games for them to
play?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(1,0);
ChPrmTblAdd(3,0);
ChPrmTblAdd(4,0);
