ChLayout(2);
BGOpen("sc210",0);
ScrFadeIn(0);
MsgDisp("主人公","(Phew... what nice weather.
Let's bask in the sun on a bench.)");
VoicePlay("F100730000_22_000");
MsgDisp("Hikaru?","Mari, this way, this way!");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(7,37,0,0,0,#1,#1,0,0,0,30);
ChOpen(22,254,0,0,3,#1,#1,0,2,0,30);
MsgDisp("主人公","｛ひかる＊｝, ｛みちる＊｝.
Huh...｛御影＊＊｝ too?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100730000_21_000");
MsgDisp("Michiru","We were just talking about 
Mikage-sensei's fashion.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F100730000_22_010");
MsgDisp("Hikaru","Right, right, Mari you
should also give him a harsh review!");
MsgDisp("主人公","Ehhh?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("F100730000_07_000");
MsgDisp("Mikage","There's no need for something 
very harsh, right? So this isn't
for fashion——");
ChEye(22,2);
ChMouth(22,3);
ChMotion(22,2,1);
ChEyeOpenLevel(22,0);
VoicePlay("F100730000_22_020");
MsgDisp("Hikaru","Hmm, I guess not after all.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F100730000_21_010");
MsgDisp("Michiru","Yeah.
I think the all-in-one is good,
but the gloves are no good.");
ChEye(22,0);
ChMotion(22,0,1);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("F100730000_07_010");
MsgDisp("Mikage","These are work gloves 
and work clothes.");
MsgDisp("主人公","Hehe.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100730000_07_020");
MsgDisp("Mikage","What are you laughing at?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("F100730000_21_020");
MsgDisp("Michiru","So is this okay for you, Mari?
Mikage-sensei's fashion?");
ChEye(22,0);
ChMouth(22,5);
ChMotion(22,4,1);
ChEyeOpenLevel(22,10);
VoicePlay("F100730000_22_030");
MsgDisp("Hikaru","Eh, really?");
MsgDisp("主人公","Umm... well, it's very
｛御影＊＊｝ -like, so I think 
it's fine but...");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("F100730000_22_040");
MsgDisp("Hikaru","But?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("F100730000_21_030");
MsgDisp("Michiru","But, these sorts of clothes 
are no good-for a date, right?");
ChMouth(22,0);
MsgDisp("主人公","Yeah, that...");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
ChEyeOpenLevel(7,8);
VoicePlay("F100730000_07_030");
MsgDisp("Mikage","Heheh.
I'll look sharp on a date though?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,1,1);
VoicePlay("F100730000_22_050");
MsgDisp("Hikaru","No way, 
That's not convincing at aalll.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F100730000_21_040");
MsgDisp("Michiru","Right, saying it when
you look like that.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
ChEyeOpenLevel(7,10);
VoicePlay("F100730000_07_040");
MsgDisp("Mikage","Ohh?
Shall we test it out then, ladies?
Then, who wants to go on a date with me?");
ChEye(22,5);
ChMouth(22,1);
ChMotion(22,5,1);
VoicePlay("F100730000_22_060");
MsgDisp("Hikaru","Eh～?");
ChEye(21,5);
ChMouth(21,4);
ChMotion(21,3);
ChCheek(21,8);
VoicePlay("F100730000_21_050");
MsgDisp("Michiru","Eh.");
MsgDisp("主人公","Ehhh∋");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100730000_07_050");
MsgDisp("Mikage","Hahaha.
Let me know when the order is decided～?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
SEWait();
MsgClose();
ChClose(21,0,30);
ChClose(22,0,30);
ChLayout(1);
MsgClose();
ChOpen(21,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(22,254,0,1,3,#1,#1,0,2,0,30);
ChMotion(22,4,1);
VoicePlay("F100730000_22_070");
MsgDisp("Hikaru","He ran away.
I can't believe he'd make 
a move like that...
Good job, Mikage-sensei.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("F100730000_21_060");
MsgDisp("Michiru","...Yeah.
A surprise attack is unfair.");
MsgDisp("主人公","(That startled me...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
