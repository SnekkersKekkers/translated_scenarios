BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yeah, I think I'll head home soon.)");
VoicePlay("E010330200_03_000");
MsgDisp("Honda?","Kojiro-sensei,
I was no good after all......");
VoicePlay("E010330200_07_000");
MsgDisp("Mikage?","Did you borrow a lot of books again?");
MsgDisp("主人公","Ah, whose voice was that just now?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,255,2,4,4,#1,#1,0,1,0,30);
ChOpen(7,255,0,0,0,#1,#1,0,2,0,30);
VoicePlay("E010330200_07_010");
MsgDisp("Mikage","Oh, you're at the library too?");
MsgDisp("主人公","No, I'm on my way back from shopping.
You two were at the library?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("E010330200_07_020");
MsgDisp("Mikage","No, I just met Honda here.
His bag is full of books.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("E010330200_03_010");
MsgDisp("Honda","Yeah.
I borrowed a lot again......");
MsgDisp("主人公","Is it okay to borrow all of that?");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("E010330200_03_020");
MsgDisp("Honda","I was just going to return them.");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("E010330200_03_030");
MsgDisp("Honda","Even though there's a new library nearby,
whenever I go to return a book at the
faraway library, I always end up borrowing
something.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("E010330200_07_030");
MsgDisp("Mikage","That sounds like you, Honda.");
MsgDisp("主人公","Hehe, that's true.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("E010330200_03_040");
MsgDisp("Honda","Haa...... you two are laughing,
but are you serious?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010330200_07_040");
MsgDisp("Mikage","Just give up and use both.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("E010330200_03_050");
MsgDisp("Honda","No, I cant. 
I accidentally went back the other day.
My family scolded me.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
ChEyeOpenLevel(3,0);
VoicePlay("E010330200_03_060");
MsgDisp("Honda","I can't go to the new one 
until I return them......");
MsgDisp("主人公","I see.
Next time try your best
to just return them, okay?");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("E010330200_03_070");
MsgDisp("Honda","You're right......
I'll read them as soon as I get home.
See you, then.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChPosition(7,0);
VoicePlay("E010330200_07_050");
MsgDisp("Mikage","Next time you go to return them,
I'll join you to keep an eye on you.");
MsgDisp("主人公","Yeah, that's reassuring.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("E010330200_07_060");
MsgDisp("Mikage","But I might end up borrowing something
too. It'll be hard to ignore his
recommendations and not borrow something,
you know?");
MsgDisp("主人公","Ah......
That certainly sounds...... difficult");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("E010330200_07_070");
MsgDisp("Mikage","Right?");
MsgDisp("主人公","(｛本多＊＊｝, good luck! I hope you can go
to the new library soon!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
