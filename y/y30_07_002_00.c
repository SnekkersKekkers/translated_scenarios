MsgType(3);
BGMPlay("BGM_C07_MIKAGE_B",0.01);
ChLayout(1);
BGOpen("ad720",0);
ScrFadeIn(0);
VoicePlay("Y300700200_07_000");
MsgDisp("Mikage","\"I just got a call from a student's
family. The leading actor for our
school play, playing 'Xu Xian' will
be absent due to family
circumsntances.\"");
SEPlay("EV_SE_GAYA_007");
Wait(50,0);
MsgDisp("","The schoolplay is the highlight of
the cultural festival. If the lead
actor isn't here, we can't start.");
MsgClear();
SEStop("EV_SE_GAYA_007",1);
VoicePlay("Y300700200_44_000");
MsgDisp("School Girl A","\"Mikage-sensei, what should we do?\"");
MsgDisp("","My worried looking students raised
their voices. Among them, the girl
playing the heroine looked at me
silently.");
MsgDisp("","My chest hurts. Of course, for the
absent student, but also for the girl
who worked so hard. I wanted her to
take the stage");
MsgClear();
VoicePlay("Y300700200_45_000");
MsgDisp("School Girl B","\"For now, 
should we stop the school play?\"");
MsgDisp("","The quiet voices of the female
students rippled across the
classroom.");
MsgDisp("","\"That's a lie! There won't be a
school play?\" \"That's unheard of\"
\"\"No, we worked so hard to prepare\"");
MsgClear();
VoicePlay("Y300700200_07_010");
MsgDisp("Mikage","\"Everyone prepared for this right?
Don't give up so easily.\"");
MsgDisp("","\"Even if you say that, Mikagecchi\"
\"We can't just memorize the lines
now\"");
MsgDisp("","The students said that all at once.
It's a matter of memorizing the
lines...");
MsgClear();
MsgDisp("主人公","\"Um,｛御影＊＊｝... You accompanied me
for all my practices, so do you
remember the lines?\"");
MsgDisp("","Everyone in the class's eyes
looked at me, all at once.");
VoicePlay("Y300700200_07_020");
MsgDisp("Mikage","\"Wait, wait. we can't do that. How
would the teacher even be the lead
part?\"");
MsgClear();
MsgDisp("","\"Why is it bad?\"
\"This is an emergency.\"");
SEPlay("EV_SE_713");
Wait(30,0);
SEPlay("EV_SE_815",0,0.8);
Wait(20,0);
SEPlay("EV_SE_621");
Wait(30,0);
MsgDisp("","The male students pf the class 
stood on their seats.");
VoicePlay("Y300700200_07_030");
MsgDisp("Mikage","\"I understand you guys' 
feelings but...\"");
SEPlay("EV_SE_788",1.5,0.7,0.2);
SEPlay("EV_SE_GAYA_007",0.5,0.7,0.2);
MsgDisp("","Even I am not that shameless.");
MsgClear();
MsgClose();
SEPlay("EV_SE_DOOR_019");
SEStop("EV_SE_788",1);
SEStop("EV_SE_GAYA_007");
BGMStop();
Wait(120,0);
BGOpen("ad721",0);
VoicePlay("Y300700200_32_000");
MsgDisp("Vice Principal Himuro","\"Mikage-sensei...
come here.\"");
VoicePlay("Y300700200_07_040");
MsgDisp("Mikage","\"Ah, yes.
Everyone be quiet.\"");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClear();
MsgClose();
ScrFadeOut(0);
BGOpen("ad722",0);
SEWait();
EnvPlay("SE_ENV_BG_SC300_CS0",0.5,0.5);
ScrFadeIn(0);
VoicePlay("Y300700200_32_010");
MsgDisp("Vice Principal Himuro","\"\"The school play is the highlight of
the cultural festival. Respecting the
feelings of your students, make a
decision Mikage-sensei.\"");
VoicePlay("Y300700200_07_050");
MsgDisp("Mikage","\"Y-yes...\"");
MsgDisp("","I never thought Vice Principal 
Himuro would push me like this.");
MsgClear();
VoicePlay("Y300700200_32_020");
MsgDisp("Vice Principal Himuro","\"I have experience with this too. And
such, now I have no regrets of it.\"");
VoicePlay("Y300700200_07_060");
MsgDisp("Mikage","\"Eh? Vice Principal Himuro was in a
school play∋\"");
MsgDisp("","I think Vice principal Himuro let his
guard down a little, as if he was
reminiscing about the past.");
MsgClear();
VoicePlay("Y300700200_32_030");
MsgDisp("Vice Principal Himuro","Talk with it carefully with your 
students and make decision.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ScrFadeOut(0);
SEWait();
MsgDisp("","Vice Principal Himuro, who placed his
hand gently on my shoulder as I
nodded slightly, had eyes that were a
little warmer than usual.");
MsgClear();
EnvStop(1);
MsgClose();
ScrFadeOut(0);
BGOpen("ad720",0);
BGMPlay("BGM_C07_MIKAGE_I",0.01);
ScrFadeIn(0);
VoicePlay("Y300700200_07_070");
MsgDisp("Mikage","\"If everyone wishes for it,
I'll do it.
Is it okay?\"");
SEPlay("EV_SE_741",1);
SEPlay("EV_SE_793",1,0.6);
VoicePlay("Y300700200_42_020");
MsgDisp("Male Student","\"As expected of Mikagecchi!\"");
VoicePlay("Y300700200_44_010");
MsgDisp("School Girl A","\"I want to see Mikage-sensei
as the lead!\"");
SEStop("EV_SE_741",2);
SEStop("EV_SE_793",2);
MsgClear();
MsgDisp("","A sparkling smile looked at me
from the window seat.");
MsgDisp("","Haa...
I can't back out now...");
BGMStop();
MsgClear();
MsgClose();
ScrFadeOut(0);
MsgType(0);
