BGOpen("ho410",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
Wait(80,0);
SEPlay("EV_SE_629");
Wait(100,0);
MsgDisp("主人公","(Mnn...Who could be calling so early in
the morning...? Ah, it's
｛氷室＊＊｝! )");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello?
What's up?");
VoicePlay("D010600300_06_000");
MsgDisp("Himuro","...Were you sleeping?");
MsgDisp("主人公","Y-Yeah.
It's already this late...");
VoicePlay("D010600300_06_010");
MsgDisp("Himuro","So...
Can you come out?
I'll be waiting at the beach.");
MsgDisp("主人公","Eh, right now?");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf620",0);
ScrFadeIn(0);
SEPlay("EV_SE_630");
MsgDisp("主人公","｛氷室＊＊｝...!
W-Wait up!");
VoicePlay("D010600300_06_020");
MsgDisp("Himuro","It's okay to take it slow.
Watch your step.");
MsgDisp("主人公","Okay...
Ah!");
SEPlay("EV_SE_631");
SEStop("EV_SE_630");
MsgClose();
ScrFadeOut(0);
MsgDisp("主人公","...Puu!");
VoicePlay("D010600300_06_030");
MsgDisp("Himuro","... Geez, that's exactly what I was
talking about.
Here, give me your hand.");
MsgClose();
BGMPlay("BGM_C06_INORI_B",0.01);
StlOpen("ev_06_09");
StlEye(6,0);
StlMouth(6,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600300_06_040");
MsgDisp("Himuro","That's my line.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600300_06_050");
MsgDisp("Himuro","It's insane of me to call you out this
early in the morning just because I have
the beach rented out.");
MsgDisp("主人公","You rented out the beach...?
You can do that?");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600300_06_060");
MsgDisp("Himuro","I asked the store chairman for help.
He's the one who organizes the annual
surfing exhibition.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600300_06_070");
MsgDisp("Himuro","He gave me today, at this time.");
MsgDisp("主人公","That's why no one else is out here.
But it was reserved for private use, so is
it really okay for me to be here?");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("D010600300_06_080");
MsgDisp("Himuro","Without you, this would be be pointless.");
MsgDisp("主人公","Eh...?");
VoicePlay("D010600300_06_090");
MsgDisp("Himuro","It's true that I used to like surfing by
myself but now...");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0,1);
VoicePlay("D010600300_06_100");
MsgDisp("Himuro","Now I think it's not such a bad idea to
share the things I like with people I
like.");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("D010600300_06_110");
MsgDisp("Himuro","The scope of that is a bit limited,
though.");
MsgDisp("主人公","That's...");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600300_06_120");
MsgDisp("Himuro","Okay, no more nonsense.
Let's focus on surfing.");
MsgDisp("主人公","Y-Yes...!");
BGMStop();
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf620",1);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for today, ｛氷室＊＊｝.
It had a great time!");
MsgClose();
ChOpen(6,255,0,0,4,#1,#1,0,0);
VoicePlay("D010600300_06_130");
MsgDisp("Himuro","You're welcome. Whenever you're ready, we
can do this again. I just need to ask the
chairman.");
MsgDisp("主人公","Okay!
But I guess it doesn't need to be just the
two of us?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600300_06_140");
MsgDisp("Himuro","That's from your perspective.
I have my reasons.");
MsgDisp("主人公","｛氷室＊＊｝, you prefer it when
it's just the two of us?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
ChCheek(6,10);
VoicePlay("D010600300_06_150");
MsgDisp("Himuro","No comment.");
MsgDisp("主人公","(Hehe!
I'm glad I was able to make such wonderful
memories with ｛氷室＊＊｝... )");
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
ChPrmTblAdd(6,0);
