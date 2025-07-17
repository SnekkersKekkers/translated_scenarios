BGOpen("fp100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Well, I guess it's time to head home.
... Huh?)");
VoicePlay("E010630200_06_000");
MsgDisp("Himuro?","Reiichi-san, what do you think of that
Japanese sweet shop over there?");
VoicePlay("E010630200_32_000");
MsgDisp("VP Himuro?","I think if it's that product, it'll be
good.");
MsgDisp("主人公","(That voice...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(32,254,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","Hello, Himuro-sensei");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("E010630200_32_010");
MsgDisp("VP Himuro","...Hmm, hello.");
ChEye(6,2);
ChMouth(6,2);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010630200_06_010");
MsgDisp("Himuro","Why are you here...?");
ChEye(32,0);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("E010630200_32_020");
MsgDisp("VP Himuro","Inori.
Greetings are basic curtesy.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010630200_06_020");
MsgDisp("Himuro","Ah... yes.
... Hi.");
MsgDisp("主人公","Hehe, hi?");
ChEye(32,2);
ChMouth(32,2);
VoicePlay("E010630200_32_030");
MsgDisp("VP Himuro","Alright.
I'll go ahead and check the sweets shop.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(32);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChPosition(6,0);
VoicePlay("E010630200_06_030");
MsgDisp("Himuro","Ah- ...
He's gone.");
MsgDisp("主人公","It's unusual to see Himuro-sensei
shopping.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("E010630200_06_040");
MsgDisp("Himuro","We had a family gathering.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("E010630200_06_050");
MsgDisp("Himuro","You were giggling just now, weren't you?");
MsgDisp("主人公","Huh?
Was I really?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010630200_06_060");
MsgDisp("Himuro","I'm sure the banter between Himuros is
strange anyway.");
MsgDisp("主人公","I don't think so.
It's nice seeing ｛氷室＊＊｝ be
obedient.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010630200_06_070");
MsgDisp("Himuro","Haa...
This is why I hate being seen with
Reiichi-san in public.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010630200_06_080");
MsgDisp("Himuro","Especially by you...");
MsgDisp("主人公","Eh, why?");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010630200_06_090");
MsgDisp("Himuro","Of course that's the case-");
ChPosition(6,1);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(32,254,0,0,0,#1,#1,0,2);
VoicePlay("E010630200_32_040");
MsgDisp("VP Himuro","Inori.");
ChEye(6,3);
ChMouth(6,5);
ChMotion(6,5);
VoicePlay("E010630200_06_100");
MsgDisp("Himuro","Wow ∋");
VoicePlay("E010630200_32_050");
MsgDisp("VP Himuro","Sorry.
That's it for me today.
I need to hurry back...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010630200_06_110");
MsgDisp("Himuro","Eh...
I see Let's go.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("E010630200_32_060");
MsgDisp("VP Himuro","We'll be off now.
Please take care on your way home.");
MsgDisp("主人公","Okay!
... See you soon, ｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010630200_06_120");
MsgDisp("Himuro","...Y-Yeah.");
MsgClose();
SEPlay("EV_SE_856");
BGMStop();
ChClose(6,0,30);
ChClose(32,0,30);
ChPosition(6,0);
MsgDisp("主人公","(Hehe! Infront of Himuro-sensei,
｛氷室＊＊｝ kinda looks like a
lost cat.)");
MsgClose();
ScrFadeOut(0,0);
