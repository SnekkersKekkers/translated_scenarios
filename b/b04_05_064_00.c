BGOpen("wf700",2);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("B040506400_05_000");
MsgDisp("Hiiragi","From the disorderly queues of the food
stalls, several different aromas and
sounds overflow and mix together, I like
this atmosphere.");
MsgDisp("主人公","Yeah, t gets you excited huh?");
ChEye(5,4);
ChMotion(5,2);
VoicePlay("B040506400_05_010");
MsgDisp("Hiiragi","I've visited the festivals of many towns.
Each one had their own unique
characteristics... I really enjoyed it.");
MsgDisp("主人公","Heehー, is that so!");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("B040506400_05_020");
MsgDisp("Hiiragi","This is Habataki City's festival huh?
I must say that this is my home with a
sense of pride.");
ChEye(5,3);
ChMotion(5,4);
VoicePlay("B040506400_05_030");
MsgDisp("Hiiragi","Yes, shall we start with some yakisoba?");
MsgDisp("主人公","Hehe, let's do it.");
ChEye(5,0);
ChMouth(5,3);
ChMotion(5,2);
VoicePlay("B040506400_05_040");
MsgDisp("Hiiragi","Ah, look at that. They have a sunny side
up egg as a topping. Is this the flavour
of home?");
ChMotion(5,0);
VoicePlay("B040506400_05_050");
MsgDisp("Hiiragi","I'll buy two.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(5);
Wait(40,0);
VoicePlay("B040506400_05_060");
MsgDisp("Hiiragi","Excuse me, I'll buy two with egg toppings
please.");
SEPlay("EV_SE_022",0.8);
MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
The fireworks are about to start!");
VoicePlay("B040506400_47_000");
MsgDisp("Night Market Clerk","Thank you～!");
MsgClose();
SEPlay("EV_SE_625",0,0.9);
Wait(60,0);
ChOpen(5,33,0,4,4,#1,#1,0,0);
VoicePlay("B040506400_05_070");
MsgDisp("Hiiragi","Sorry to keep you waiting.
Let's take our time to enjoy some local
yakisoba at the fireworks venue.");
MsgDisp("主人公","Yeah.
Let's go!");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(5,0,0);
