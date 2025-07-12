ChLayout(1);
BGOpen("fp100",1);
ScrFadeIn(0);
MsgDisp("主人公","(......Hm?
Infront of the store window is......)");
MsgClose();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,255,3,1,4,#1,#1,0,0);
MsgDisp("主人公","Hello, ｛御影＊＊｝.
What are you doing?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010720000_07_000");
MsgDisp("Mikage","Oh.
I'm embarrassed to be seen.");
ChPosition(7,1);
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChNanaType(0);
ChOpen(4,255,0,2,0,#1,#1,0,2);
ChMotion(4,2,1);
VoiceEVSPlay(4);
VoicePlay("E010720000_04_000");
MsgDisp("Nanatsumori","｛主人公｝.
Bad time to call out.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,1);
VoicePlay("E010720000_07_010");
MsgDisp("Mikage","Nanatsumori?
What do you mean timing?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("E010720000_04_010");
MsgDisp("Nanatsumori","Mikage-sensei, you were
about to enter the beauty salon,
weren't you?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
MsgDisp("主人公","Oh, is that right?");
VoicePlay("E010720000_07_020");
MsgDisp("Mikage","Ah, no, I was just
thinking about it.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("E010720000_07_030");
MsgDisp("Mikage","Nanatsumori was watching me?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("E010720000_04_020");
MsgDisp("Nanatsumori","Yeah.
I'm curious about Mikage-sensei's
hairstyle.");
MsgDisp("主人公","｛御影＊＊｝,
you go to that beauty salon over there?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010720000_07_040");
MsgDisp("Mikage","Ah, no.
That's not it.");
ChEye(7,2);
ChMouth(7,0);
VoicePlay("E010720000_07_050");
MsgDisp("Mikage","Actually......
The person who always did my hair at the
salon quit and I haven't gone back.");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("E010720000_07_060");
MsgDisp("Mikage","My hair is unique, you know?
It's a hassle to explain, and there's
certain way to treat it.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("E010720000_04_030");
MsgDisp("Nanatsumori","Ahー...... I totally get it.
I'm also nervous about having my hair
done by someone I never met.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("E010720000_07_070");
MsgDisp("Mikage","Yeah, yeah that's it.
So I was considering if I would
go into that store......");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010720000_07_080");
MsgDisp("Mikage","Oh well, I guess I'll stop here for today.
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(7);
Wait(60);
ChPosition(4,0);
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("E010720000_04_040");
MsgDisp("Nanatsumori","......So Mikage-sensei went to
the beauty salon. He kinda doesn't
seem like the type, does he?");
MsgDisp("主人公","(I like ｛御影＊＊｝'s hairstyle
I hope he always keeps it that way......)");
MsgClose();
ScrFadeOut(0,0);
