BGOpen("sc300",0);
SEPlay("EV_SE_788",1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_019");
Wait(100,1);
MsgClose();
ScrFadeOut(0);
SEStop("EV_SE_788",2);
VoicePlay("Z710700000_07_000");
MsgDisp("Mikage?","Shh, be quiet.");
BGOpen("sc320",0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("Z710700000_07_010");
MsgDisp("Mikage","Please, be quiet this year.");
VoicePlay("Z710700000_42_000");
MsgDisp("Male Student A","Mikagecchi.
You're properly wearing a suit, huh?");
SEPlay("EV_SE_GAYA_017");
SEPlay("EV_SE_863",0,0.6);
Wait(30,1);
MsgDisp("主人公","(Ah!
｛御影＊＊｝ is my homeroom teacher
again this year!?)");
VoicePlay("Z710700000_44_000");
MsgDisp("School Girl A","Even though the overalls were cool.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("Z710700000_07_020");
MsgDisp("Mikage","Come on, be quiet.
I don't want to get yelled at by vice
principal Himuro on the first day again.");
SEStop("EV_SE_863",2);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("Z710700000_07_030");
MsgDisp("Mikage","Well, let me introduce myself first.");
VoicePlay("Z710700000_41_020");
MsgDisp("Male Student B","Everyone already knows you.");
SEPlay("EV_SE_GAYA_016",0,0.9);
Wait(50,1);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("Z710700000_07_040");
MsgDisp("Mikage","It's not about that.
Let's find something interesting in
what we have to do.");
SEStop("EV_SE_GAYA_016",5);
MsgClose();
ScrFadeOut(0);
ChClose(7);
SEPlay("EV_SE_067");
SEWait();
MsgClose();
BGOpen("sc321",0);
ScrFadeIn(0);
Wait(60);
SEPlay("EV_SE_544");
ChOpen(7,254,0,0,3,-1,-1,0,0);
VoicePlay("Z710700000_07_050");
MsgDisp("Mikage","So, my name is Mikage Kojiro.
Looking around, I see a lot of familiar
faces. Looking forward to this year, too.");
SEPlay("EV_SE_743");
SEPlay("EV_SE_863",0,0.7);
Wait(30,0);
VoicePlay("Z710700000_45_000");
MsgDisp("School Girl B","Look forward to it, Mikagecchi!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoiceEVSPlay(7);
VoicePlay("Z710700000_07_060");
MsgDisp("Mikage","｛主人公｝, it looks like we
have extra time again this year,
so let's have an interesting question.");
MsgDisp("主人公","What?
Interesting......");
SEStop("EV_SE_743",2);
VoicePlay("Z710700000_42_040");
MsgDisp("Male Student A","Mikagecchi, how awful!
You're too much!");
MsgDisp("主人公","Um...... Ah!
Please tell us about the cow on the
blackboard.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("Z710700000_07_070");
MsgDisp("Mikage","Good question.
This girl is Molly, a female Holstein.
The real one is even more beautiful.");
VoicePlay("Z710700000_41_050");
MsgDisp("Male Student B","We know.
It's Mikagecchi's girlfriend, right?");
SEPlay("EV_SE_GAYA_016");
SEPlay("EV_SE_GAYA_023",0.01,0.5);
SEPlay("EV_SE_863",0,0.4)VoicePlay("Z710700000_45_010");
MsgDisp("School Girl B","What!?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("Z710700000_07_080");
MsgDisp("Mikage","Molly is closer to family than a lover.
Just like you guys.");
VoicePlay("Z710700000_44_010");
MsgDisp("School Girl A","What?
I'd like to be sensei's lover, though.");
SEStop("EV_SE_GAYA_016",2);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("Z710700000_45_020");
MsgDisp("School Girl B","Ah, me too!");
SEPlay("EV_SE_GAYA_023",0.01,0.5);
SEPlay("EV_SE_863",0,0.6);
SEPlay("EV_SE_864",0,0.9);
MsgDisp("主人公","(Hehe!
｛御影＊＊｝ is super popular.)");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("Z710700000_07_090");
MsgDisp("Mikage","Aah, hey.
Keep your voices down.
It'll end up like last year again.");
SEStop("EV_SE_GAYA_023",2);
SEStop("EV_SE_863",2);
SEStop("EV_SE_864",2);
MsgClose();
BGMStop(2);
ScrFadeOut(0);
ChClose(7);
Wait(60);
BGOpen("sc300",0);
ScrFadeIn(0);
MsgDisp("主人公","(｛御影＊＊｝ is my teacher
again this year.
My second year is going to be fun!)");
MsgClose();
ScrFadeOut(0,0);
