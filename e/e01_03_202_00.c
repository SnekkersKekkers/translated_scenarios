BGOpen("fp000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yeah, I think it's time to go home now.
Wait, over there, is that...)");
VoicePlay("E010320200_06_000");
MsgDisp("Himuro?","Ohhh.
So Iku-senpai is good at Shogi too.");
VoicePlay("E010320200_03_000");
MsgDisp("Honda?","Back when I was in elementary school I
would play against my Dad on Saturdays.");
MsgDisp("主人公","｛本多＊＊｝, ｛氷室＊＊｝,
what are you guys up to?");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,2,0,30);
VoiceEVSPlay(6);
VoicePlay("E010320200_06_010");
MsgDisp("Himuro","｛主人公｝, eavesdropping
is impolite.");
MsgDisp("主人公","I just happened to be passing by.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("E010320200_03_010");
MsgDisp("Honda","I was playing Shogi with an old man at the
park when Nori-kun came by and started to
cheer me on.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010320200_06_020");
MsgDisp("Himuro","I wasn't rooting for you in particular.");
MsgDisp("主人公","Hey, do the two of you like Shogi?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010320200_06_030");
MsgDisp("Himuro","I've only played against the computer.
I have no experience playing against other
people.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("E010320200_03_020");
MsgDisp("Honda","Really?
Isn't Shogi better when it's played face
to face against people?");
MsgDisp("主人公","Ah, it would be interesting to watch the
two of you compete.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("E010320200_06_040");
MsgDisp("Himuro","I won't be doing that.
You only say that because you didn't get
to see that old man's confusion earlier.");
VoicePlay("E010320200_06_050");
MsgDisp("Himuro","Alright, I'll leave here.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5,1);
ChPosition(3,0);
VoicePlay("E010320200_03_030");
MsgDisp("Honda","Ehh∋
Why?
Let's play at school next time!");
VoicePlay("E010320200_06_060");
MsgDisp("Himuro","If we make it a rule to not talk during
the game, I'll consider it.
But that's impossible for you, right?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("E010320200_03_040");
MsgDisp("Honda","Ah, wait up, Nori-kun!");
MsgDisp("主人公","He left...");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("E010320200_03_050");
MsgDisp("Honda","Banning talking is no fun.
That old man seemed to be having fun
listening to me too...");
MsgDisp("主人公","(｛氷室＊＊｝ is probably avoiding
｛本多＊＊｝ because all the
chatter makes it hard for him to
concentrate?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
